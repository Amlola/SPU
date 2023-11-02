#include "assembler.h"



int main(int argc, char* argv[])
    {
    Text data = {};

    FILE* input_file = fopen(argv[1], "rb");

    if (input_file == nullptr) 
        {
        printf("%s\n", VAASMERROR[INPUT_FILE_NOT_FOUND]);
        return INPUT_FILE_NOT_FOUND;
        }

    File_input(input_file, &data);

    


    FILE* file_output_bin = fopen("output_file_bin.bin", "wb");

    FILE* listing = fopen("listing.txt", "w");

    if (file_output_bin == nullptr || listing == nullptr) 
        {
        printf("%s\n", VAASMERROR[OUTPUT_FILE_NOT_FOUND]);
        return OUTPUT_FILE_NOT_FOUND;
        }




    Label label = {};

    LabelCtor(&label);

    VAssembler ass = {};

    VAssemblerInit(&ass, &data);




    Assembler(file_output_bin, listing, data.str, &data, &label, &ass);

    free(ass.Buffer);

    VAssemblerInit(&ass, &data);
    
    ass.status = GoAssembler;

    Assembler(file_output_bin, listing, data.str, &data, &label, &ass);




    fclose(file_output_bin);

    fclose(listing);

    Free(&data);

    free(label.label_array);

    return 0;
    }