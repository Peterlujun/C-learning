#include<stdio.h>
int main()
{
    int n,reversednumber = 0,remainder;
    printf("请输入一个数字:\n");
    scanf("%d",&n);
    while(n != 0)
    {
        remainder = n %10;
        reversednumber  = remainder + (reversednumber * 10);
        n /= 10;
    }
    printf("反转后的数字为：%d\n",reversednumber);
    return 0;
}