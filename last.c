#include<stdio.h>
#include<string.h>
int main()
{
    char data[100]={0};
    int max=0,min=100;
    fgets(data,sizeof(data),stdin);
    int len1=strlen(data);
    int log[26]={0};

    for (int  i = 0; i < len1; i++)
    {
        if (data[i] >= 'a' && data[i] <= 'z')
        {
            int temp=data[i]-'a';
            log[temp]++;//读取
        }
    }
        
        max=log[0];//初始化最大值
        for (int i = 0; i < 26; i++)
        {
            if (max<log[i])
            {
                max=log[i];
            }
            if(log[i] > 0 && log[i] < min) 
            {
                min = log[i];
            }
        }

    if ((max-min)>2 && (max-min)%2!=0 || (max-min)==2)
    {
        printf("Lucky Word\n");
        printf("%d",max-min);
    }
    else
    {
    printf("No Answer\n");
    printf("0");    
    }
}