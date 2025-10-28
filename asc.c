#include <stdio.h>

int main()
{
    int n;
    int num=0;
    scanf("%d",&n);
    for (int i = 0; i <=n; i++) 
    {
        char data;
        scanf("%c",&data);
        if (97<=data&&data<=122)
        {
            if (num>0)
            {
                printf("\\");  
            }
            printf("%d",data); 
        num++;
        }
    }
}