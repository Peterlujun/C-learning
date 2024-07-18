#include <stdio.h>
int main()
{
    int n, reversedNumber = 0,remainder;
    printf("请输入一个整数\n");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder= n % 10;
        reversedNumber = reversedNumber* 10 + remainder;
        n /= 10;
    }
    printf("反转后的整数：%d\n",reversedNumber);
    return 0;
}