#include <stdio.h>
int main()
{
    int a[10][10],transpose[10][10],r,c,i,j;
    printf("��������������:");
    scanf("%d %d",&r,&c);

    printf("\n�������Ԫ��:\n");
    for(i=0;i<r;i++)
        for (j = 0; j<c; j++)
        {
            printf("����Ԫ��a%d%d��",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("\n�������\n");
    for ( i = 0; i < r; i++)
    {
        for(j=0; j<c; ++j)
        
        {
            printf("%d ",a[i][j]);
            if (j == c-1)
            {
              printf("\n\n");
            }
        }
    }
      // ת��
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
 

    printf("\nת�������:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        }

    return 0;
    
}