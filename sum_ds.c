#include<stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int data[n][m];

    // 读取矩阵数据
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &data[i][j]);
        }
    }
    
    int max_sum = -100000;
    int max_i = 0, max_j = 0;

    // 遍历所有可能的2x2子矩阵
    for (int i = 0; i <= n - 2; i++) {
        for (int j = 0; j <= m - 2; j++) {
            // 计算当前2x2子矩阵的和
            int sum = data[i][j] + data[i][j+1] + data[i+1][j] + data[i+1][j+1];
            
            // 更新最大值（处理并列情况）
            if (sum > max_sum) {
                max_sum = sum;
                max_i = i;
                max_j = j;
            } else if (sum == max_sum) {
                // 如果和相等，选择行号更小的
                if (i < max_i) {
                    max_i = i;
                    max_j = j;
                } 
                // 如果行号相同，选择列号更小的
                else if (i == max_i && j < max_j) {
                    max_j = j;
                }
            }
        }
    }
    
    printf("%d %d %d", max_sum, max_i, max_j);
    return 0;
}