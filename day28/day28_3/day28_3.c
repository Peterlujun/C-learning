#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,num;
    float *data;
    printf("输入元素个数（1~100）:");
    scanf("%d",&num);

    data = (float *)malloc(num*sizeof(float));

    if (data == NULL)
    {
        printf("Error!!! 内存没有分配。");
        exit(0);
    }
    printf("\n");
    for ( i = 0; i < num; i++)
    {
        printf("输入数字%d :",i+1);
        scanf("%f",data+i);
    }
    for ( i = 1; i < num; i++)
    {
        if(*data < *(data+i))
            {
                *data = *(data+i);
            }
    }
    printf("最大元素 = %.2f",*data);
    return 0;
}