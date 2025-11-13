#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 4

void Input_matrix(int matrix[SIZE][SIZE]);
void Show_matrix(int matrix[SIZE][SIZE]);
int Sum_diagonal(int matrix[SIZE][SIZE]);
int Product_even_index(int matrix[SIZE][SIZE]);
void Find_max_diagonal(int matrix[SIZE][SIZE]);

int main()//矩阵元素处理
{
    int matrix[SIZE][SIZE];
    
    printf("请输入4×4矩阵的元素:\n");
    Input_matrix(matrix);
    
    printf("输入的矩阵:\n");
    Show_matrix(matrix);
    
    int sum = Sum_diagonal(matrix);
    printf("对角线元素的和: %d\n", sum);
    
    int product = Product_even_index(matrix);
    printf("行列下标均为偶数的对角线元素积: %d\n", product);
    
    Find_max_diagonal(matrix);
    
    return 0;
}

void Input_matrix(int matrix[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void Show_matrix(int matrix[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int Sum_diagonal(int matrix[SIZE][SIZE])
{
    int sum = 0;
    
    for(int i = 0; i < SIZE; i++)
    {
        sum += matrix[i][i];
    }
    
    for(int i = 0; i < SIZE; i++)
    {
        int j = SIZE - 1 - i;
        if(i != j)
        {
            sum += matrix[i][j];
        }
    }
    
    return sum;
}

int Product_even_index(int matrix[SIZE][SIZE])
{
    int product = 1;
    int count = 0;
    
    for(int i = 0; i < SIZE; i += 2)
    {
        for(int j = 0; j < SIZE; j += 2)
        {
            if(i == j || i + j == SIZE - 1)
            {
                product *= matrix[i][j];
                count++;
                printf("包含元素 matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
            }
        }
    }
    
    if(count == 0)
    {
        return 0;
    }
    
    return product;
}

void Find_max_diagonal(int matrix[SIZE][SIZE])
{
    int max_value = matrix[0][0];
    int max_row = 0, max_col = 0;
    
    for(int i = 0; i < SIZE; i++)
    {
        if(matrix[i][i] > max_value)
        {
            max_value = matrix[i][i];
            max_row = i;
            max_col = i;
        }
        
        int j = SIZE - 1 - i;
        if(matrix[i][j] > max_value)
        {
            max_value = matrix[i][j];
            max_row = i;
            max_col = j;
        }
    }
    
    printf("对角线上的最大值: %d\n", max_value);
    printf("位置: matrix[%d][%d]\n", max_row, max_col);
    
    printf("对角线元素: ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", matrix[i][i]);
    }
    for(int i = 0; i < SIZE; i++)
    {
        int j = SIZE - 1 - i;
        if(i != j)
        {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
}