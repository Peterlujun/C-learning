#include<stdio.h>
int main()
{
    int i,j,count;
    for(i=1;i<=10;i++)
    {
        for (j=i ; j <= 100; j += 10)
        {
            printf("%3d",j); //%3d是C语言中格式化输出字符，代表的意思是指的输出3个字符长度的整数。
        }
        printf("\n");  
    }
    return 0;
}