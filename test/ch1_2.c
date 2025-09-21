#include <stdio.h>

int findMax(int x, int y, int z)
{
    int max = x;
    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }
    return max;
}

int main() 
{
    int a, b, c;
    printf("Please enter three integers (separated by Spaces) :\n");
    scanf("%d %d %d", &a, &b, &c);
    int max = findMax(a, b, c);
    printf("The maximum value is:%d\n", max);
    return 0;
}