#include<stdio.h>
int main()
{
    int n ,i;
    unsigned long long factorial = 1;

    printf("输入一个整数：");
    scanf("%d",&n);

    if (n<0)
    {
        printf("Error! 负数没有阶乘");
    }
    else
    {
        for (i=0; i<n; i++)
        {
            factorial *= i;
        }
        printf("%d != %lld", n, factorial);
    }
    return 0;
}