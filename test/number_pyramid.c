#include<stdio.h>

int main()
{
    int i,j,x,num;
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
    for(j=1;j<=num-i;j++)
    {
    printf(" ");
    }
    for(x=1;x<=i;x++)
    {
    printf("%d",x);
    }
    for(x=i-1;x>=1;x--)
    {
    printf("%d",x);
    }
    printf("\n");

    }
    
	return 0;
}