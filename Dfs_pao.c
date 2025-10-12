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
        //return冻结上一次函数调用和执行，
        //在dfs（3，2）执行后return到dfs（2，1）末尾即引用函数结尾，
        //此时隐式的i在这一轮结束时还要进行i++，
        //所以在return后i++进行了两次。
        //即从dfs（2，1）到dfs（3，1）到dfs（4，2）。
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