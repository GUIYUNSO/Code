#include <stdio.h>
//自定义函数拼接字符串
void myStrcat(char dest[], char src[]) {
    int i = 0, j = 0;
    
    while (dest[i] != '\0') {
        i++;
    }
    
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    
    dest[i] = '\0';
}

int main() {
    char str1[100];
    char str2[100];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    myStrcat(str1, str2);
    
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}