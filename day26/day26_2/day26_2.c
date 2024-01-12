#include <stdio.h>
int main()
{
    int i,n;
    float arr[100];

    printf("输入元素的个数（0~100）");
    scanf("%d",&n);
    printf("\n");

    for ( i = 0; i < n; i++)
    {
        printf("输入数字 %d ",i+1);
        scanf("%f",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (arr[0]<arr[i])
        {
            arr[0] = arr[i];
        }  
    }
    printf("最大元素为=%.2f",arr[0]);
    return 0;
}