#include<stdio.h>
int main()
{
    int n ,i;
    unsigned long long factorial = 1;

    printf("����һ��������");
    scanf("%d",&n);

    if (n<0)
    {
        printf("Error! ����û�н׳�");
    }
    else
    {
        for (i=0; i<n; i++)
        {
            factorial *= i;
        }
        printf("%d != %lld", n, factorial);
    }
    return 0;
}