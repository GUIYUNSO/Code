#include<stdio.h>

int main()
{
    double sum=0;
    for (int i = 1; i < 101; i++)
    {
        double num;
        if (i%2==0)
        num=-1.0/i;
        else
        num=1.0/i;
        sum=sum+num;
    }
    printf("%lf",sum);
    return 0;
}