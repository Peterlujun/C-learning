#include<stdio.h>
int checkPrime(int n);
int main()
{
    int n,i,flag=0;

    printf("输入正整数：");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(checkPrime(i) == 1)  //  
        {
            if (checkPrime(n-i) == 1)
            {
                printf("%d = %d + %d\n",n,i,n-i);
                flag = 1;
            }      
        }
    }
    if (flag == 0)
    {
        printf("%d不能分解为两个素数。",n);
    }
    return 0;
}

int checkPrime(int n)
{
    int i,isPrime = 1;
    for(i = 2;i<n/2;i++)
    {
        if(n%i==0)
        {
            isPrime  = 0;
            break;
        }
    }
    return isPrime;
}