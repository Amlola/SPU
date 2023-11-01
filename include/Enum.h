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




#define DEF_CMD(name, num, have_arg, ...)  \
        name = num,

enum comand
    {
    #include "comands.py"
    };

#undef DEF_CMD




typedef struct 
    {
    int code;           
    const char* name_comand;
    int arg;    
    } Comand;

/*#define DEF_CMD(name, num, have_arg, ...)  \
        num, tolower(name), have_arg

const Comand CMD_LIST[] = 
    {
    {0,  "in",    0},
    {1,  "push",  1},
    {2,  "out",   0},
    {3,  "add",   0},
    {4,  "sub",   0},
    {5,  "mult",  0},
    {6,  "div",   0},
    {7,  "sqrt",  0},
    {8,  "sin",   0},
    {9,  "cos",   0},
    {10, "hlt",   0},
    {11, "pop",   1},
    {12, "jmp",   1},
    {13, "ja",    1},
    {14, "jae",   1},
    {15, "jb",    1},
    {16, "jbe",   1},
    {17, "je",    1},
    {18, "jne",   1},
    {19, "call",  1},
    {20, "ret",   0},
    };

#undef DEF_CMD*/


const Comand CMD_LIST[] = 
    {
    {0,  "in",    0},
    {1,  "push",  1},
    {2,  "out",   0},
    {3,  "add",   0},
    {4,  "sub",   0},
    {5,  "mult",  0},
    {6,  "div",   0},
    {7,  "sqrt",  0},
    {8,  "sin",   0},
    {9,  "cos",   0},
    {10, "hlt",   0},
    {11, "pop",   1},
    {12, "jmp",   1},
    {13, "ja",    1},
    {14, "jae",   1},
    {15, "jb",    1},
    {16, "jbe",   1},
    {17, "je",    1},
    {18, "jne",   1},
    {19, "call",  1},
    {20, "ret",   0},
    {21, "draw",  0},
    {22, "int",  0},
    };




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


