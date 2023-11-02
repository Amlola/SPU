#include "processor.h"


int main()
    {
    Text data = {};

    FILE* file_in = fopen("../Vassembler/output_file_bin.bin", "rb");

    long long BufferSize = GetFileSize(file_in);

    char* Buffer = (char*) calloc(BufferSize, sizeof(char));

    fread(Buffer, sizeof(char), BufferSize, file_in);

    CPU processor = {};

    Proccesor(Buffer, BufferSize, &processor);

    Free(&data);

    free(Buffer);

    return 0;
    }
