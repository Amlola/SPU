#include "disassembler.h"


int main()
    {

    Text data = {};

    FILE* file = fopen("output_file_bin.bin", "rb");
    assert(file);
    
    long long BufferSize = GetFileSize(file);

    char* Buffer = (char*) calloc(BufferSize, sizeof(char));

    fread(Buffer, sizeof(char), BufferSize, file);

    FILE* file1 = fopen("out_file.txt", "w");

    DisAssembler(file1, Buffer, BufferSize);

    fclose(file1);

    Free(&data);

    free(Buffer);

    return 0;
    }