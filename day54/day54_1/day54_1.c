#include<stdio.h>
int main()
{
    int a,b;
    a=077;
    b=a|3;
    printf("b ��ֵΪ %d \n",b);
    b|=0177;
    printf("b ��ֵΪ %d \n",b);
    return 0;
}