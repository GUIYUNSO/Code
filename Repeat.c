#include<stdio.h>

int main()
{
    char data[100];
    fgets(data,sizeof(data),stdin);
    for(int i=0;i<3;i++)
    fputs(data,stdout);
    return  0;
}