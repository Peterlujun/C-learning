#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("ÐÐÊý£º");
    scanf("%d",&rows);

    for(i=rows;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("* ");
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}