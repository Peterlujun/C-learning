#include <stdio.h>
int main()
{
    int n, i;
    float num[100],sum = 0.0,avgage;

    printf("����Ԫ�ظ�����");

    scanf("%d",&n);
    while (n>100 || n<=0)
    {
        printf("Error! ������Ҫ��1��100֮�䡣\n");
        printf("�ٴ����룺");
        scanf("%d",&n);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d.�������֣�",i+1);
        scanf("%f",&num[i]);
        sum += num[i];
    }
    
    avgage = sum /n;
    printf("ƽ��ֵ = %.2f",avgage);
    
    return 0;
}   
