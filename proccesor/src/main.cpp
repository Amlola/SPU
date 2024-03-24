#include "processor.h"


int main(int argc, const char* argv[])
    {
    Text data = {};

    if (argc < 2)   
        {
        printf("Usage: %s <file.bin>\n", argv[0]);
        }
    
    else 
        {
        FILE* file_in = fopen(argv[1], "rb");

        if (!file_in) 
            {
            printf("File: %s can't be openned\n", argv[1]);
            }
        
        long long BufferSize = GetFileSize(file_in);

        char* Buffer = (char*)calloc(BufferSize, sizeof(char));

        fread(Buffer, sizeof(char), BufferSize, file_in);

        CPU processor = {};

        Proccesor(Buffer, BufferSize, &processor);

        Free(&data);

        free(Buffer);
        }

    return 0;
    }
