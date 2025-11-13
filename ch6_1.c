#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 100

void Random_generate(int data[], int n);
void Display_array(int arr[], int n);
void Above_average(int arr[], int n);
void Change_min_max(int arr[], int n);
void Return_arr(int arr[], int n);
void Sort(int arr[], int n);
void Sequent(int arr[], int n, int target);
void Binary(int arr[], int n, int target);

int main()//数组元素处理
{
    int n;
    int target;
    int arr[N];
    
    printf("请输入要处理的元素个数n(n<=%d): ", N);
    scanf("%d", &n);
    
    if (n <= 0 || n > N) {
        printf("输入错误！n应该在1到%d之间\n", N);
        return 1;
    }
    
    srand(time(NULL));
    Random_generate(arr, n);
    
    printf("生成的随机数组: ");
    Display_array(arr, n);
    
    Above_average(arr, n);
    
    Change_min_max(arr, n);
    
    Return_arr(arr, n);
    
    Sort(arr, n);
    printf("排序后数组: ");
    Display_array(arr, n);
    
    printf("请输入要查找的数字: ");
    scanf("%d", &target);
    
    printf("顺序查找: ");
    Random_generate(arr, n);
    printf("查找数组: ");
    Display_array(arr, n);
    Sequent(arr, n, target);
    
    printf("二分查找: ");
    Sort(arr, n);
    printf("查找数组: ");
    Display_array(arr, n);
    Binary(arr, n, target);
    
    return 0;
}

void Random_generate(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}

void Display_array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Above_average(int arr[], int n)
{
    int sum = 0;
    double average;
    
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    average = (double)sum / n;
    
    printf("数组平均值: %.2f\n", average);
    printf("高于平均数的数据: ");
    
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > average)
        {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    
    if (!found) {
        printf("无");
    }
    printf("\n");
}

void Change_min_max(int arr[], int n)
{
    int max_index = 0;
    int min_index = 0;
    
    printf("交换前数组: ");
    Display_array(arr, n);
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[max_index])
        {
            max_index = i;
        }
        if (arr[i] < arr[min_index])
        {
            min_index = i;
        }
    }
    
    printf("最大值: arr[%d] = %d\n", max_index, arr[max_index]);
    printf("最小值: arr[%d] = %d\n", min_index, arr[min_index]);
    
    int temp;
    temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;
    
    printf("交换后数组: ");
    Display_array(arr, n);
}

void Return_arr(int arr[], int n)
{
    printf("逆置前数组: ");
    Display_array(arr, n);
    
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    
    printf("逆置后数组: ");
    Display_array(arr, n);
}

void Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Sequent(int arr[], int n, int target)
{
    int count = 0;
    printf("比较过程: ");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        count++;
        
        if (arr[i] == target)
        {
            printf("\n比较次数: %d\n", count);
            printf("查找结果: 找到，位置在 arr[%d]\n", i);
            return;
        }
    }
    
    printf("\n比较次数: %d\n", count);
    printf("查找结果: 未找到\n");
}

void Binary(int arr[], int n, int target)
{
    int count = 0;
    int left = 0;
    int right = n - 1;
    
    printf("比较过程: ");
    
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        printf("%d ", arr[mid]);
        count++;
        
        if (arr[mid] == target)
        {
            printf("\n比较次数: %d\n", count);
            printf("查找结果: 找到，位置在 arr[%d]\n", mid);
            return;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    
    printf("\n比较次数: %d\n", count);
    printf("查找结果: 未找到\n");
}