#include <stdio.h>
#include <math.h>

int main() {
    double r = 0.09;  
    int n = 10;       
    double p;        
    
    p = pow(1 + r, n);  
    
    printf("10年后国民生产总值是现在的 %.2lf 倍\n", p);
    printf("增长了 %.2lf%%\n", (p - 1) * 100);
    
    return 0;
}