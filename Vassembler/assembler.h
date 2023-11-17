#pragma once

#include "../include/Enum.h"
#include "str.h"


const int NotFoundLabel = -1;


enum AsmError 
    {
    INCORRECT_ARG,
    UNKNOWN_COMAND,
    ALLOC_ERROR,
    NOT_FOUND_LABEL,
    INPUT_FILE_NOT_FOUND,
    OUTPUT_FILE_NOT_FOUND,
    COMAND_WITHOUT_ARG,
    SUCCESS,
    };


const char* const VAASMERROR[SUCCESS] = 
    {
    "INCORRECT ARGUMENT",
    "UNKNOWN COMAND",
    "ALLOC ERROR",
    "NOT FOUND LABEL",
    "INPUT FILE NOT FOUND",
    "OUTPUT FILE NOT FOUND",
    "COMAND DOESN'T HAVE ARG"
    };


typedef enum
    {
    PreAssembler,
    GoAssembler,
    }Status;


struct VAssembler 
    {
    char machine_code;
    Status status;
    size_t ip;
    char* Buffer;
    };


struct label_arr
    {
	int index_label;
	char name_label[MaxLenLable];
    };

struct Label
    {
	label_arr* label_array;
	size_t pos;
	size_t size;
    };


AsmError Assembler(FILE* file_to_bin, FILE* listing, String* text, Text* data, Label* label, VAssembler* ass); 

AsmError ParseArgument(FILE* listing, char arg[], VAssembler* ass, Label* label, String* text, size_t Nstring, size_t Ncomand);

bool CheckArgument(size_t j);

AsmError ParseInstruction(FILE* listing, String* text, size_t Nstring, Label* label, VAssembler* ass);

AsmError LabelCtor(Label* label);

bool IsMark(char string[]); 

bool IsReg(char StrArg[], int* arg);

AsmError FillBufferWithReg(char StrArg[], VAssembler* ass, FILE* listing, size_t Nstring, size_t Ncomand); 

void AddLabel(char comand[], Label* label, size_t ip);

double FindLabel(Label* label, char arg[]);

AsmError VAssemblerInit(VAssembler* ass, Text* data);

void WriteToBuffer(VAssembler* ass, FILE* file); 

AsmError WorkWithComand(String* text, size_t Nstring, size_t Ncomand, VAssembler* ass, Label* label, FILE* listing); 

AsmError FillBufferWithLabel(Label* label, char StrArg[], VAssembler* ass, FILE* listing, size_t Nstring, size_t Ncomand); 

AsmError FillBuffer(VAssembler* ass, double arg, FILE* listing, size_t Nstring, size_t Ncomand);

AsmError WorkWithArgument(String* text, size_t Nstring, size_t Ncomand, VAssembler* ass, Label* label, FILE* listing);

bool HaveComment(String* text, size_t Nstring);

void WithoutComment(String* text, size_t Nstring);

bool IsClear(char comand[]);
