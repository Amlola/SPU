#pragma once

#include "../../include/Enum.h"
#include "../../FileHandler/str.h"
#include "../../Stack/stack.h"

struct CPU 
    {
    Stack_type* RAM;
    Stack stk;
    Stack stkCall;
    Stack_type RegistrArray[NRegistr]; 
    int code;
    };


static int Calcul(CPU* processor, char* Buffer, size_t* ip); 

void Proccesor(char* Buffer, long long BufSize, CPU* processor); 

double* GetArg(CPU* processor, size_t* ip, char* Buffer);

static int CmpDouble(const double a, const double b); 

void CPUCtor(CPU* processor);

void CPUDtor(CPU* processor); 

