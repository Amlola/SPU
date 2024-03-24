#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <math.h>


typedef double             Stack_type;
typedef long long          hash_type;
typedef unsigned long long canary_type;


#define POISON_VALUE_FOR_ADRESS (Stack_type*)0xDED

#define POISON_NUMBER_FOR_VALUE (Stack_type)71828

#define RIGHTCANARYDATA *(canary_type*)((char*)stk->stack_data + stk->stack_size * sizeof(*stk->stack_data))

#define LEFTCANARYDATA *(canary_type*)((char*)stk->stack_data - sizeof(canary_type))

#define CHECKERROR(stk)                                  \
                    if (StackOK(stk) != NO_ERROR1)       \
                        {                                \
                        ON_DUMP                          \
                            (                            \
                            StackDump(stk);              \
                            )                            \
                        return stk->stack_status;        \
                        }


#ifdef DUMP
    #define ON_DUMP(...) __VA_ARGS__
    #define StackDump(stack_ptr) StackDumpFunction(stack_ptr, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#else
    #define ON_DUMP(...)
#endif


#ifdef CANARY
    #define ON_CANARY(...) __VA_ARGS__
#else
    #define ON_CANARY(...)
#endif


#ifdef HASH
    #define ON_HASH(...) __VA_ARGS__
#else
    #define ON_HASH(...)
#endif


typedef enum
    {
    NO_ERROR1                  = 0,
    NULL_STACK                 = 1 << 0,
	NULL_DATA                  = 1 << 1,
	SIZE_LESS_THAN_ZERO        = 1 << 2,
	POS_LESS_THAN_ZERO         = 1 << 3,
	SIZE_LESS_THAN_POS         = 1 << 4,
	STACK_LEFT_CANARY_DAMAGED  = 1 << 5,
	STACK_RIGHT_CANARY_DAMAGED = 1 << 6,
	DATA_LEFT_CANARY_DAMAGED   = 1 << 7,
	DATA_RIGHT_CANARY_DAMAGED  = 1 << 8,
	WRONG_HASH_DATA            = 1 << 9,
	WRONG_HASH_STACK           = 1 << 10,
	USE_STACK_AFTER_DESTROY    = 1 << 11,
    POP_NULL                   = 1 << 12,
    WRONG_NEW_SIZE             = 1 << 13,
    NUMBER_OF_ERROR            = 14
    }ERROR123;


typedef struct 
    {
    ERROR123 CodeError;
    const char* NameError;
    }STACK_STATUS;


const STACK_STATUS ErrorArray[] = {
    {NO_ERROR1,                     "NO ERROR"},
    {NULL_STACK,                    "NULL STACK"},
    {NULL_DATA,                     "NULL DATA"},
    {SIZE_LESS_THAN_ZERO,           "SIZE LESS THAN ZERO"},
    {POS_LESS_THAN_ZERO,            "POSITION LESS THAN ZERO"},
    {SIZE_LESS_THAN_POS,            "SIZE LESS THAN POSITION"},
    {STACK_LEFT_CANARY_DAMAGED,     "STACK LEFT CANARY DAMAGED"},
    {STACK_RIGHT_CANARY_DAMAGED,    "STACK RIGHT CANARY DAMAGED"},
    {DATA_LEFT_CANARY_DAMAGED,      "DATA LEFT CANARY DAMAGED"},
    {DATA_RIGHT_CANARY_DAMAGED,     "DATA RIGHT CANARY DAMAGED"},
    {WRONG_HASH_DATA,               "WRONG HASH DATA"},
    {WRONG_HASH_STACK,              "WRONG HASH STACK"},
    {USE_STACK_AFTER_DESTROY,       "USE STACK AFTER DESTROY"},
    {POP_NULL,                      "STACK IS EMPTY"},
    {WRONG_NEW_SIZE,                "WRONG NEW SIZE"}};


static FILE* logfile = NULL;


const int sz = 4;
const int Size_extend = 2;


struct Stack
    {
    ON_CANARY
        (
        canary_type LeftCanary;
        )

    Stack_type* stack_data = {};
    int stack_size   = 0;
    int stack_pos    = 0;
    int stack_status = 0;

    ON_HASH
        (
        hash_type hash_stack;
        hash_type hash_data;
        )

    ON_CANARY
        (
        canary_type RightCanary;
        )
    };


void StackCtor(Stack* stk);

int StackPush(Stack* stk, Stack_type value);

int StackPop(Stack* stk, Stack_type* retvalue);

void StackDtor(Stack* stk);

bool StackOK(Stack* stk);

void StackDumpFunction(Stack* stk, const char* path, const char* signature, unsigned line);

static int StackResize(Stack* stk, int stack_Newsize);

static size_t StackCanarySize();

hash_type static Hash(void* memory, size_t number_of_bytes);

hash_type static CalculateHashStack(Stack* stk);

hash_type static CalculateHashData(Stack* stk);

static void FillPoisonValue(Stack* stk);

static void Copy(Stack* stk, Stack_type* dataResize);