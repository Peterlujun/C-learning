#include <stdio.h>
int main()
{
    int n,reversedInteger = 0,remainder,originalInteger;
    printf("��һ��������");
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
        printf("%d �ǻ�������", originalInteger);
    else
        printf("%d ���ǻ�������", originalInteger);
    
    return 0;
}