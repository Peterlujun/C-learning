#include <stdio.h>
int main()
{
    int i, base,exponent;
    long long   result=1;
    
    printf("����: ");
    scanf("%d",&base);
     
    printf("ָ����");
    scanf("%d",&exponent);
    i = exponent;
    while (exponent!=0)
    {
        result=base*result;
        exponent--;
    }
    printf("%d��%d�η�λ����%d",base,i,result);
    return 0;
}