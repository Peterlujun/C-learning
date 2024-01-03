#include<stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("请输入一个数字：");
    scanf("%d", &n);

    while (n!=0)
        {
            n = n/ 10;
            count++;
        }
    printf("这个数是一个%d位数\n",count);
    return 0;
}