#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, disc, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    disc = b * b - 4 * a * c;
    x1 = (-b + sqrt(disc)) / (2 * a);
    x2 = (-b - sqrt(disc)) / (2 * a);
    
    printf("x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    return 0;
}