#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,num;
    float *data;
    printf("����Ԫ�ظ�����1~100��:");
    scanf("%d",&num);

    data = (float *)malloc(num*sizeof(float));

    if (data == NULL)
    {
        printf("Error!!! �ڴ�û�з��䡣");
        exit(0);
    }
    printf("\n");
    for ( i = 0; i < num; i++)
    {
        printf("��������%d :",i+1);
        scanf("%f",data+i);
    }
    for ( i = 1; i < num; i++)
    {
        if(*data < *(data+i))
            {
                *data = *(data+i);
            }
    }
    printf("���Ԫ�� = %.2f",*data);
    return 0;
}