#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("请输入一个正整数：");
    scanf("%d",&n);

    for(i =2;i<= n/2;i++)
        {
            if(n%i == 0)
                flag=1;
                break;
        }
    if(n<=1) {
        flag=1;
    }    
    if (flag == 1)
        {
            printf("%d 不是一个素数",n);
        }
    else    
        {
            printf("%d 是一个素数",n);
        }
    return 0;
}
