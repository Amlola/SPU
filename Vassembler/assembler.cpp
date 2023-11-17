#include "assembler.h"



AsmError Assembler(FILE* file_to_bin, FILE* listing, String* text, Text* data, Label* label, VAssembler* ass) 
    { 
    assert(text);

    if (ass->status == GoAssembler) 
        {
        fprintf(listing, " LINE   NAME_COMD   NAME_ARG   DEC_COMD   HEX_COMD   DEC_ARGT   HEX_ARGT\n");
        }

   for (size_t Nstring = 0; Nstring < data->count_n; Nstring++)
        {
        if (HaveComment(text, Nstring)) 
            {
            WithoutComment(text, Nstring);
            }

        ParseInstruction(listing, text, Nstring, label, ass);
        } 
    
    if (ass->status == GoAssembler) 
        {
        WriteToBuffer(ass, file_to_bin);
        }
    
    return SUCCESS;
    }  



AsmError ParseInstruction(FILE* listing, String* text, size_t Nstring, Label* label, VAssembler* ass)
    {
    char comand[MaxLenCmdName] = {};

    sscanf(((text + Nstring)->adress), "%s", &comand);

    if (IsMark(comand))
        {
        comand[strlen(comand) - 1] = '\0';

        AddLabel(comand, label, ass->ip);

        return SUCCESS;
        }
    
    for (size_t Ncomand = 0; Ncomand < sizeof(CMD_LIST) / sizeof(Comand); Ncomand++)
        {  
        if (strcmp(comand, CMD_LIST[Ncomand].name_comand) == 0)
            {
            WorkWithComand(text, Nstring, Ncomand, ass, label, listing);

            return SUCCESS;
            }
        }

    if (ass->status == GoAssembler && !IsClear(comand))
        {
        printf("%s line: %d\n", VAASMERROR[UNKNOWN_COMAND], Nstring);

        return UNKNOWN_COMAND;
        }

    return SUCCESS;
    }



AsmError WorkWithComand(String* text, size_t Nstring, size_t Ncomand, VAssembler* ass, Label* label, FILE* listing) 
    {           
    ass->machine_code = CMD_LIST[Ncomand].code;

    if (CheckArgument(Ncomand)) 
        {
        WorkWithArgument(text, Nstring, Ncomand, ass, label, listing);
        }
    
    else
        {
        char arg[MaxLenArg] = {};

        sscanf(((text + Nstring)->adress), "%*s %s", &arg);

        if (!IsClear(arg) && ass->status == GoAssembler) 
            {
            printf("%s line: %d\n", VAASMERROR[COMAND_WITHOUT_ARG], Nstring);

            return COMAND_WITHOUT_ARG;
            }

        ass->Buffer[ass->ip] = ass->machine_code;

        ass->ip += 1;

        if (ass->status == GoAssembler)
            {
            fprintf(listing, "%06d %10s\t\t ---   %08d   %08X\t\t  ---\t\t ---\n", Nstring + 1, CMD_LIST[Ncomand].name_comand, ass->machine_code, ass->machine_code);
            }
        }
        
    return SUCCESS;
    }



AsmError WorkWithArgument(String* text, size_t Nstring, size_t Ncomand, VAssembler* ass, Label* label, FILE* listing) 
    {
    char arg[MaxLenArg] = {};

    sscanf(((text + Nstring)->adress), "%*s %s", &arg);

    ParseArgument(listing, arg, ass, label, text, Nstring, Ncomand);

    ass->ip += sizeof(double) + 1;

    return SUCCESS;
    }



AsmError ParseArgument(FILE* listing, char arg[], VAssembler* ass, Label* label, String* text, size_t Nstring, size_t Ncomand)
    {
    double DoubleArg = 0;

    int IntArg = 0;

    char StrArg[MaxLenArg] = "";

    if (sscanf(arg, "%lf", &DoubleArg) == 1) 
        { 
        ass->machine_code |= IMM;

        FillBuffer(ass, DoubleArg, listing, Nstring, Ncomand);
        } 

    else if (sscanf(arg, "[%d]", &IntArg) == 1) 
        { 
        ass->machine_code |= IMM | RAM;

        FillBuffer(ass, IntArg, listing, Nstring, Ncomand);
        } 

    else if (sscanf(arg, "[%[a-z]]", &StrArg) == 1)
        { 
        ass->machine_code |= REG | RAM;

        FillBufferWithReg(StrArg, ass, listing, Nstring, Ncomand);
        } 

    else if (sscanf(arg, "%s", &StrArg) == 1) 
        {
        if (IsReg(StrArg, &IntArg)) 
            {
            ass->machine_code |= REG;

            FillBufferWithReg(StrArg, ass, listing, Nstring, Ncomand); 
            }

        else 
            {
            ass->machine_code |= IMM;

            FillBufferWithLabel(label, StrArg, ass, listing, Nstring, Ncomand); 
            }
        }
    
    else 
        {
        printf("%s line: %d\n", VAASMERROR[INCORRECT_ARG], Nstring);

        return INCORRECT_ARG;
        }
    
    ass->Buffer[ass->ip] = ass->machine_code;

    return SUCCESS;
    }



AsmError FillBufferWithReg(char StrArg[], VAssembler* ass, FILE* listing, size_t Nstring, size_t Ncomand) 
    {
    int arg = 0;

    if (IsReg(StrArg, &arg)) 
        {
        *(double*)(ass->Buffer + ass->ip + 1) = (double)arg;

        if (ass->status == GoAssembler) 
            {
            fprintf(listing, 
                    "%06d %10s %10s   %08d   %08X   %08d   %08X\n", 
                    Nstring + 1, CMD_LIST[Ncomand].name_comand, 
                    REG_LIST[arg - 1], 
                    ass->machine_code, 
                    ass->machine_code, 
                    arg, 
                    arg);
            }
        }
    return SUCCESS;
    }



AsmError FillBufferWithLabel(Label* label, char StrArg[], VAssembler* ass, FILE* listing, size_t Nstring, size_t Ncomand) 
    {
    double arg = FindLabel(label, StrArg);

    if ((int)arg != NotFoundLabel)
        {
        FillBuffer(ass, arg, listing, Nstring, Ncomand);
        }

    else 
        {
        if (ass->status == GoAssembler) 
            {
            printf("%s line: %d\n", VAASMERROR[NOT_FOUND_LABEL], Nstring + 1);

            return NOT_FOUND_LABEL;
            }

        *(double*)(ass->Buffer + ass->ip + 1) = 0;
        }
    
    return SUCCESS;
    }



AsmError FillBuffer(VAssembler* ass, double arg, FILE* listing, size_t Nstring, size_t Ncomand) 
    {
    *(double*)(ass->Buffer + ass->ip + 1) = arg;

    if (ass->status == GoAssembler)
        {
        fprintf(listing, "%06d %10s %10lf   %08d   %08X   %08lf   %X\n", Nstring + 1, CMD_LIST[Ncomand].name_comand, arg, ass->machine_code, ass->machine_code, arg, arg);
        }
    
    return SUCCESS;
    }



AsmError VAssemblerInit(VAssembler* ass, Text* data) 
    {
    ass->Buffer = (char*)calloc((sizeof(char) + sizeof(double)) * data->count_n, sizeof(char));

    if (!ass->Buffer) 
        {
        printf("%s\n", VAASMERROR[ALLOC_ERROR]);

        return ALLOC_ERROR;
        }

    ass->ip = 0;

    ass->machine_code = 0;

    ass->status = PreAssembler;

    return SUCCESS;
    }



AsmError LabelCtor(Label* label)
    {
	label->size = MaxLenLable;

	label->pos = 0;

	label->label_array = (label_arr*)calloc(label->size, sizeof(label_arr));

    if (!label->label_array) 
        {
        printf("%s\n", VAASMERROR[ALLOC_ERROR]);

        return ALLOC_ERROR;
        }

    return SUCCESS;
    }



double FindLabel(Label* label, char arg[]) 
    {
    for (size_t i = 0; i < label->pos; i++) 
        {
        if (strcmp(label->label_array[i].name_label, arg) == 0) 
            {
            return label->label_array[i].index_label;
            }
        }
    return NotFoundLabel;
    }



void AddLabel(char comand[], Label* label, size_t ip) 
    { 
    label->label_array[label->pos].index_label = ip;

    strcpy(label->label_array[label->pos].name_label, comand);

    label->pos += 1;
    }



bool CheckArgument(size_t j) 
    {
    if (CMD_LIST[j].arg == 1) 
        {
        return true;
        }
    return false;
    }


bool IsReg(char StrArg[], int* arg)
    {  
    for (size_t i = 0; i < sizeof(REG_LIST) / sizeof(*REG_LIST); i++) 
            {
            if (strcmp(StrArg, REG_LIST[i]) == 0)
                {
                *arg = i + 1;

                return true;
                }
            }

    *arg = 0;

    return false;
    }



bool IsMark(char string[]) 
    {
    return strchr(string, ':') != nullptr;
    }



bool HaveComment(String* text, size_t Nstring)
    {
    return strchr((text + Nstring)->adress, '#') != nullptr;
    }



void WithoutComment(String* text, size_t Nstring) 
    {
    for (size_t i = 0; (text + Nstring)->adress[i] != '\0'; i++) 
        {
        if ((text + Nstring)->adress[i] == '#') 
            {
            (text + Nstring)->adress[i] = '\0';
            }
        }
    }



void WriteToBuffer(VAssembler* ass, FILE* file) 
    {
    fwrite(ass->Buffer, sizeof(char), ass->ip, file);
    
    free(ass->Buffer);
    }



bool IsClear(char comand[]) 
    {
    return comand[0] == '\0';
    }