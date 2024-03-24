#pragma once

#include "../include/Enum.h"
#include "str.h"

void DisAssembler(FILE* output, char* Buffer, long long BufSize);

static int GetComand(char code, size_t ip, char* Buffer, FILE* output);

static int GetArg(char code, size_t ip, char* Buffer, FILE* output);


