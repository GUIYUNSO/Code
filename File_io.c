#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *target;
    char ch;
    
    // 打开源文件 output.txt（例10.1版本2创建的文件）
    if ((source = fopen("output.txt", "r")) == NULL) {
        printf("无法打开源文件 output.txt!\n");
        printf("请确保例10.1的程序已经运行并创建了output.txt文件\n");
        exit(1);
    }
    
    // 打开目标文件 file2.dat
    if ((target = fopen("file2.dat", "w")) == NULL) {
        printf("无法创建目标文件 file2.dat!\n");
        fclose(source);
        exit(1);
    }
    
    // 逐个字符读取并写入
    printf("正在从 output.txt 复制到 file2.dat...\n");
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }
    
    // 关闭文件
    fclose(source);
    fclose(target);
    
    printf("文件复制完成! output.txt 已复制到 file2.dat\n");
    
    return 0;
}