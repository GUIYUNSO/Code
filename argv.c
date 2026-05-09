#include <stdio.h>

int main(int argc, char *argv[]) //读取命令行参数
{
    printf("Number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
}