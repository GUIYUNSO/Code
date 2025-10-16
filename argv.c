#include <stdio.h>

int main(int argc, char *argv[]) 
{
    printf("Number of arguments: %d\n", argc);
    for (size_t i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    
}