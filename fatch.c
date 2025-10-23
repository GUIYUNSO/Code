#include<stdio.h>

void insertionSortOptimized(int arr[], int n) {
    int i, j, key;

    for (i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
    }
    
    for (i = 2; i < n; i++) {
        key = arr[i];
        j = i;
        
        while (key < arr[j - 1]) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
}

int main() {
    int num;
    int data[100];
    
    scanf("%d", &num);
    
    int max_value = -1;
    int first_max_index = -1;
    
    for (int i = 0; i < num; i++) {
        scanf("%d", &data[i]);
        
        if (data[i] > max_value) {
            max_value = data[i];
            first_max_index = i;
        }
    }
    
    insertionSortOptimized(data, num);
    
    printf("%d %d", max_value, first_max_index);
    
    return 0;
}