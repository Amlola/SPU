#include "processor.h"
    
#define PUSH(arg) 	   StackPush(&processor->stk, arg)

#define POP(arg1)      StackPop (&processor->stk, &arg1)

#define DEF_CMD(name, num, have_arg, ...)      \
    {                                          \
	case name:					               \
		__VA_ARGS__					           \
		break;						           \
    }                                          


void Proccesor(char* Buffer, long long BufferSize, CPU* processor) 
    {
    StackCtor(&processor->stk);
    StackCtor(&processor->stkCall);

    processor->RAM = (Stack_type*)calloc(RAM_size, sizeof(Stack_type));

    size_t ip = 0;

    while (ip < BufferSize) 
        {
        processor->code = Buffer[ip];
        ip++;

        ip = Calcul(processor, Buffer, BufferSize, ip);

        StackDump(&processor->stk);

        //printf("%d\n", ip);

        if (ip == EndOfProgram) 
            {
            break;
            }
        }

    StackDtor(&processor->stkCall);
    StackDtor(&processor->stk);

    }


static int Calcul(CPU* processor, char* Buffer, long long BufferSize, size_t ip) 
    {
    switch (processor->code & COMMAND_MASK)
        {
        #include "..\include\comands.py"

        default:
            printf("unknown command");
            //abort();
        }

    return ip;
    }


#undef DEF_CMD


bool check(double i, double j)
    {
    const double EPS = 1e-9;
    return fabs(i - j) < EPS;
    }


static double GetArg(CPU* processor, size_t ip, char* Buffer)
    {
    double value1 = 0;

    if (processor->code & REG) 
        {
        value1 = processor->RegistrArray[Buffer[ip] - 1];
        }
    
    else if (processor->code & IMM)
        {
        value1 = *(int*)(Buffer + ip);
        }
    
    return value1;
    }
