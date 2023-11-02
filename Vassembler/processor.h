#pragma once

#include "str.h"
#include "stack.h"
#include "../include/Enum.h"

struct CPU 
    {
    Stack_type* RAM;
    Stack stk;
    Stack stkCall;
    Stack_type RegistrArray[NRegistr]; 
    int code;
    };


static int Calcul(CPU* processor, char* Buffer, long long BufferSize, size_t ip); 

void Proccesor(char* Buffer, long long BufSize, CPU* processor); 

static double GetArg(CPU* processor, size_t ip, char* Buffer);

static int CmpDouble(const double a, const double b); 