#include<stdio.h>
#include<math.h>
int main()
{
    int l,r,t,c=0;
    scanf("%d %d",&l,&r);
    
    for(t=l+1;t<r;t++)
    {
        if (t<2)
        {
            continue;
        }
        int is_prime=1;
        
        for (int i = 2; i <= sqrt(t); i++)
        {
            if(t%i==0)
            {
                is_prime=0;
                break;
            }
        }
        
        if (is_prime)
        {
            c++;
        }
    }
        printf("%d ",c);
        return 0;
}