#include<stdio.h>

int main()
{
    int num;
    int data[100];
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        int n;
        scanf("%d",&n);
        data[i]=n;
    }
    for (int i = num-1; i >=0; i--)
    {
        printf("%d",data[i]);
        printf(" ");
    }
    
}