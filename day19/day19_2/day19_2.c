#include <stdio.h>
int main()
{
    int n,reversedInteger = 0,remainder,originalInteger;
    printf("输一个整数：");
    scanf("%d",&n);

    originalInteger = n;
    reversedInteger = 0;
    while (n!=0)
    {
        remainder = n%10;
        reversedInteger = reversedInteger *10 + remainder;
        n /= 10;
    }

 
    if (originalInteger == reversedInteger)
        printf("%d 是回文数。", originalInteger);
    else
        printf("%d 不是回文数。", originalInteger);
    
    return 0;
}