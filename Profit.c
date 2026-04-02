#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        double profit = (double)(A) * A / 9.0 + B;
        printf("%.2lf %.2lf\n", profit, profit);
    }
    return 0;
}