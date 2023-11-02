#include "disassembler.h"



void DisAssembler(FILE* output, char* Buffer, long long BufSize) 
    { 
    size_t ip = 0;

    size_t i = 1;

    while (ip < BufSize) 
        {
        char code = Buffer[ip];

        ip = GetComand(code, ip, Buffer, output);

        i++;
        }
    }



static int GetComand(char code, size_t ip, char* Buffer, FILE* output) 
    {
    for (size_t i = 0; i < sizeof(CMD_LIST) / sizeof(Comand); i++)
        {              
        if ((code & COMMAND_MASK) == CMD_LIST[i].code)
            { 
            fprintf(output, "%s ", CMD_LIST[i].name_comand);

            ip++;

            if (CMD_LIST[i].arg == HAVE_ARG) 
                {
                ip = GetArg(code, ip, Buffer, output);
                }

            else 
                {
                fprintf(output, "\n");
                }

            break;
            }
        }
    return ip;
    }



static int GetArg(char code, size_t ip, char* Buffer, FILE* output)
    {
    if (code & RAM) 
        {
        if (code & REG) 
            {
            fprintf(output, "[%s]\n", REG_LIST[*(int*)(Buffer + ip) - 1]);
            }

        else if (code & IMM) 
            {
            fprintf(output, "[%d]\n", *(int*)(Buffer + ip));
            }
        }
    
    else if (code & IMM)
        {
        fprintf(output, "%d\n", *(int*)(Buffer + ip));
        }
    
    else if (code & REG) 
        {
        fprintf(output, "%s\n",  REG_LIST[*(int*)(Buffer + ip) - 1]);
        }
    
    return ip + sizeof(int);
    }