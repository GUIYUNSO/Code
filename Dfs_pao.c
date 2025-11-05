#include <stdio.h>

int M, N;
int path[16]; 

void dfs(int start, int depth) {
    if (depth == N) {
        for (int i = 0; i < N; i++) {
            printf("%d ", path[i]);
        }
        printf("\n");
        return;
    }
    
    for (int i = start; i <= M; i++) {
        path[depth] = i;  
        dfs(i + 1, depth + 1); 
    }
}

int main() 
{
    scanf("%d %d", &N, &M);
    dfs(1, 0);
    
    return 0;
}