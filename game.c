#include<stdio.h>

int main()
{
    int nor,now,total;
    scanf("%d",&nor);
    total=(1+nor)*nor/2;
    for(int i=1;i<nor;i++)
    {
        scanf("%d",&now);
        total=total-now;
    }
    printf("%d",total);
    
}