#include<stdio.h>

int main()
{
    int ave=0;
    int sum=0;
    int data[11];
    int max=0,min=100;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&data[i]);
        if (max<data[i])
        {
            max=data[i];
        }
        if (min>data[i])
        {
            min=data[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        sum=sum+data[i];
    }
    sum=sum-max-min;
    ave=sum/8.0;
    printf("%d",ave);
}