#include<stdio.h>

int main()
{
    int tar;
    int count=0;
    int num[100];
    char temp;

    scanf("nums = [");
    while (1)
    {
        scanf("%d",&num[count++]);
        scanf("%c", &temp);
        if (temp == ']')
        break; 
    }

    scanf(", target =%d",&tar);
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (num[i]+num[j]==tar)
            {
                printf("[%d,%d]",i,j);
                return 0;
            }
        }
        
    }
}