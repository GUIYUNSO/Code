#include<stdio.h>

int main()
{
    int name,right;
    int data[100];
    scanf("%d",&name);
    scanf("%d",&right);
    for (int i = 0; i < name; i++)
    {
        data[i]=i+1;
    }
    for (int i = right; i <name; i++)
    {
        data[i]=data[i]-right;
    }
    for (int i = 0; i < right; i++)
    {
        data[i]=name-right+data[i];
    }

    for (int i = 0; i < name; i++)
    {
        printf("%d",data[i]);
        printf(" ");
    }
    
    return 0;
}