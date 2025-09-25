#include<stdio.h>
int main()
{
    float p0=10000,r1=0.0036,r2=0.0042,r3=0.0048;
    float p1,p2,p3;
    p1=p0*(1+r1);
    p2=p1*(1+r2);
    p3=p2*(1+r3/2)*(1+r3/2);
    printf("p1=%f p2=%f p3=%f\n",p1,p2,p3);
    return 0;
}