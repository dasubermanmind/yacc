
#include<stdio.h>
#include "helpers/vector.h"
#include "compiler.h"


int main()
{
    printf("Starting up");
    int result = compile_file("./test.c", "./test", 0);
    if(result == COMPILER_FILE_COMPILED_OK)
    {
        printf("All compiled correctly");
    }
    else if(result == COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Failed to compiled");
    }
    else{
        printf("Unknown Response");
    }
    return 0;
}