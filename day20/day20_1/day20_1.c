#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("������һ����������");
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
            printf("%d ����һ������",n);
        }
    else    
        {
            printf("%d ��һ������",n);
        }
    return 0;
}
