#include <stdio.h>
int main()
{
    int a,b;
    a=077;
    b=a&3;
    printf("a & b(decimal) Ϊ %d \n",b);
    b&=2;
    printf("a & b(decimal) Ϊ %d \n",b);
    return 0;
}