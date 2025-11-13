#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    int data[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &data[i][j]);
        }
    }
    
    int sum = 0;
    int combo = 0;
    
    for (int i = n - 1; i >= 0; i--) {
        int cnt = 0;
        
        for (int j = 0; j < m; j++) {
            if (data[i][j] == 1) {
                cnt++;
            }
        }
        
        if (cnt > 0) {
            combo += cnt;
            sum += cnt * (1 + combo);
        }
    }
    
    printf("%d\n", sum);
    return 0;
}