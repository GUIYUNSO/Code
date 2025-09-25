#include<stdio.h>
int main()
{
    float iron=7.86,gold=19.3;
    float wight_iron,wight_gold,pi=3.1415926,r=5;
    wight_gold=4/3*pi*r*r*r*gold;
    wight_iron=4/3*pi*r*r*r*iron;
    printf("wight_iron=%f wight_gold=%f\n",wight_iron,wight_gold);
    return 0;
}