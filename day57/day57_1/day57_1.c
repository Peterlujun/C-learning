#include<stdio.h>
#include<stdlib.h>
 
void fun(int *s,int n)
{
    /* 交换最大*/
    int i;
    int max=s[0];
    int a=0;
    for(i=0;i<n;i++)
    {
        if(s[i]>max)
        {
            max=s[i];
            a=i;
        }
    }
    s[a]=s[0];
    s[0]=max;
    /* 交换最小 */
    int j;
    int min=s[n-1];
    int b=n-1;
    for(j=0;j<n;j++)
    {
        if(s[j]<min)
        {
            min=s[j];
            b=j;
        }
    }
    s[b]=s[n-1];
    s[n-1]=min;
}
 
void printfs(int *s,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",s[i]);
    printf("\n");
}
 
int main()
{
    int s[20];
    int i,n;
    printf("设置数组长度(<20):");
    scanf("%d",&n);
    printf("输入 %d 个元素:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    fun(s,n);
    printfs(s,n);
    return 0;
}