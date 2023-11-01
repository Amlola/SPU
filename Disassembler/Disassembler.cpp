#include "disassembler.h"


void DisAssembler(FILE* file1, char* Buffer, long long BufSize) 
    { 
    size_t ip = 0;

    while (ip < BufSize)
        {
        int code_cmd = Buffer[ip];
        ip++;

        for (size_t j = 0; j < sizeof(CMD_LIST) / sizeof(Comand); j++)
            {              
            if ((code_cmd & COMMAND_MASK) == CMD_LIST[j].code)
                { 
                if (CMD_LIST[j].arg == HAVE_ARG) 
                    {
                    int arg = Buffer[ip];

                    if (code_cmd & REG)
                        {
                        fprintf(file1, "%s %s\n", CMD_LIST[j].name_comand, REG_LIST[arg - 1]);
                        }
                    
                    else if (code_cmd & IMM)
                        {
                        fprintf(file1, "%s %d\n", CMD_LIST[j].name_comand, arg);
                        }

                    ip += sizeof(int);
                    break;   
                    }

                fprintf(file1, "%s\n", CMD_LIST[j].name_comand);

                break;
                }
            }
        }
    }

