#include <stdio.h>

int main() 
{
    int total,james,shuo;
    int james_num[100];
    int shuo_num[100];
    scanf("%d",&total);
    scanf("%d",&james);
    scanf("%d",&shuo);
    for (int i = 0; i < james; i++)
    {
        int n;
        scanf("%d",&n);
        james_num[i]=n;
    }
    for (int i = 0; i < shuo; i++)
    {
        int m;
        scanf("%d",&m);
        shuo_num[i]=m;
    }
    for (int i = 0; i < total; i++)
    {
        shuo_num[i+shuo]=shuo_num[i];
    }
    for (int i = 0; i < total; i++)
    {
        james_num[i+shuo]=james_num[i];
    }
    for (int i = 0; i < total; i++)
    {
        
    }

}