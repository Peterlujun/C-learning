#include<stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("������һ�����֣�");
    scanf("%d", &n);

    while (n!=0)
        {
            n = n/ 10;
            count++;
        }
    printf("�������һ��%dλ��\n",count);
    return 0;
}