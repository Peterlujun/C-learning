#include<stdio.h>
int main()
{
    int a,b=10,c=1;
    printf("������һ�����֣�");
    scanf("%d",&a);
    while (a/b>0)
    {
        b=b*10;
        c++;
    }
    printf("%d��һ��%dλ��\n",a,c);
    return 0;
}