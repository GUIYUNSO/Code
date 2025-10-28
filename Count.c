#include<stdio.h>
#include<string.h>

int main()
{
    int count=0;
    char data[256];
    fgets(data,sizeof(data),stdin);
    for (int i = 0; i < strlen(data); i++)
    {
        if (data[i]>='0'&&data[i]<='9')
        {
            count++;
        }
    }
    printf("%d",count);
}