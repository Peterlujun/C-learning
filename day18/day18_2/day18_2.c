#include<stdio.h>
int main()
{
    int a,b=10,c=1;
    printf("请输入一个数字：");
    scanf("%d",&a);
    while (a/b>0)
    {
        b=b*10;
        c++;
    }
    printf("%d是一个%d位数\n",a,c);
    return 0;
}