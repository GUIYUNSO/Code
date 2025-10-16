#include <stdio.h>

int main() 
{
    int n;
    long long dp[100];
    scanf("%d", &n);
    dp[1] = 1;
    dp[2] = 2;
    for (size_t i = 3; i <= n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    printf("%lld\n", dp[n]);

    return 0;
}