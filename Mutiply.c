#include<stdio.h>

int data[100];

int main()
{
    for (int i = 0; i < 100; i++)
    {
        data[i]=i+1;
    }
    
    int num;
    scanf("%d",&num);
    for (int j = 0; j <= num; j++)
        {
            for (int i = 0; i < num; i++)
            {
                if(data[i]<=j)
                {printf("%d*%d=%d",data[i],j,data[i]*(j));
                if(data[i]==j)
                {
                    printf("\n");
                }
                else
                {
                    printf(" ");
                }
            }
            }
        }

    return 0;
}