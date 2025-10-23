#include<stdio.h>


int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int data[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &data[i][j]);
        }
    }

    int max_sum = -100000;
    int max_i = 0, max_j = 0;

    for (int j = 0; j < n; j++)
    {
        for(int i = 0; i < m; i++)
        {
            int sum;
            sum=data[n-1+i][m-2+j]+data[n-2+i][m-1+j]+data[n-1+i][m-1+j]+data[n-2+i][m-2+j];
                if (sum > max_sum) {
                max_sum = sum;
                max_i = i;
                max_j = j;
            } else if (sum == max_sum) {
                if (i < max_i) {
                    max_i = i;
                    max_j = j;
                } 
                else if (i == max_i && j < max_j) {
                    max_j = j;
            }
        }
        }
    }
printf("%d %d %d",max_sum,max_i,max_j);
}
