#include <stdio.h>
#include<math.h>

int main() 
{
    int num;
    scanf("%d", &num);
    if(num<=0||num==2)
    {
        printf("NO");
        return 0;
    }
    if (num % 2==0)
    {
        printf("YES");
        return 0;
    }
    for(int i=1;i<=num;i+=1)
    {
        int instant1,instant2;
        instant1=num/2;
        instant2=instant1+1;
        if(instant1==0 && instant2==0)
        {
        printf("YES");
        return 0;
        }
        else
        {
        printf("NO");
        return 0;  
        }
    }
}