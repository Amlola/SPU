#include "processor.h"
    
#define PUSH(arg) 	   StackPush(&processor->stk, arg)

#define POP(arg1)      StackPop (&processor->stk, arg1)

#define DEF_CMD(name, num, have_arg, str_name, ...)      \
    {                                                    \
	case name:					                         \
		__VA_ARGS__					                     \
		break;						                     \
    }                                                    \

#define SIGN(x) ((x > 0) - (x < 0));                                    


void Proccesor(char* Buffer, long long BufferSize, CPU* processor) 
    {
    CPUCtor(processor); 

    size_t ip = 0;

    while (ip < BufferSize) 
        {
        processor->code = Buffer[ip];

        ip++;

        //printf("%d, %d\n", ip, processor->code & COMMAND_MASK);
        
        ip = Calcul(processor, Buffer, ip);

        StackDump(&processor->stk);

        if (ip == EndOfProgram) 
            {
            break;
            }
        }

    CPUDtor(processor); 
    }


static int Calcul(CPU* processor, char* Buffer, size_t ip) 
    {
    switch (processor->code & COMMAND_MASK)
        {
        #include "..\include\comands"

        default:
            printf("unknown command");
        }

    return ip;
    }


#undef DEF_CMD



double* GetArg(CPU* processor, size_t ip, char* Buffer)
    {
    if (processor->code & RAM) 
        {
        if (processor->code & REG) 
            {
            return &processor->RAM[(size_t)processor->RegistrArray[(size_t)*(double*)(Buffer + ip) - 1]];
            }
        
        else if (processor->code & IMM) 
            {
            return &processor->RAM[(size_t)*(double*)(Buffer + ip)];
            }
        }
    else if (processor->code & IMM)
        {
        return (double*)(Buffer + ip);
        }

    else if (processor->code & REG) 
        {
        return &processor->RegistrArray[(size_t)*(double*)(Buffer + ip) - 1];
        }
        
    return 0;
    }



static int CmpDouble(const double a, const double b) 
    {
    const double EPS = 1e-9;

    if (fabs(b - a) < EPS) 
        {
        return 0;
        }

    return SIGN(a - b);
    }



void CPUCtor(CPU* processor) 
    {
    StackCtor(&processor->stk);

    StackCtor(&processor->stkCall);

    processor->RAM = (Stack_type*)calloc(RAM_size, sizeof(Stack_type));

    for (size_t i = 0; i < NRegistr; i++) 
        {
        processor->RegistrArray[i] = POISON_NUMBER_FOR_VALUE;
        }

    processor->code = 0;
    }


void CPUDtor(CPU* processor) 
    {
    StackDtor(&processor->stk);

    StackDtor(&processor->stkCall);

    free(processor->RAM);

    free(processor->RegistrArray);

    processor->code = -1;
    }