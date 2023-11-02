#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <math.h>




const int NRegistr = 4;

const int RAM_size = 400;

const int EndOfProgram = -1;




enum MaxLen
    {
    MaxLenCmdName = 100,
    MaxLenArg     = 100,
    MaxLenLable   = 100,
    MaxLenString  = 100
    };




typedef struct 
    {
    int code;           
    const char* name_comand;
    int arg;    
    } Comand;

#define DEF_CMD(name, num, have_arg, str_name, ...)  \
        {num, str_name, have_arg},

const Comand CMD_LIST[] =
    {
    #include "comands"
    };

#undef DEF_CMD




#define DEF_CMD(name, num, have_arg, str_name, ...)  \
        name = num,

enum comand
    {
    #include "comands"
    };

#undef DEF_CMD




const char REG_LIST[][NRegistr] = {
    {"rax"},
    {"rbx"},
    {"rcx"},
    {"rdx"}};




typedef enum
    {
    COMMAND_MASK = 31,
    HAVE_ARG = 1,
    IMM = 1 << 5,
    REG = 1 << 6,
    RAM = 1 << 7
    } Arguments;