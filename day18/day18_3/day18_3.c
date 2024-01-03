#include <stdio.h>
int main()
{
    int i, base,exponent;
    long long   result=1;
    
    printf("基数: ");
    scanf("%d",&base);
     
    printf("指数：");
    scanf("%d",&exponent);
    i = exponent;
    while (exponent!=0)
    {
        result=base*result;
        exponent--;
    }
    printf("%d的%d次方位等于%d",base,i,result);
    return 0;
}