#include <stdio.h>
void cyclicSwap(int *a, int *b,int *c);
int main()
{
    int a,b,c;
    printf("请输入三个数，以空格隔开：\n");
    scanf("%d %d %d",&a,&b,&c);
    
    printf("交换前：\n");
    printf("a=%d\t b=%d\t c=%d\n",a,b,c);
    cyclicSwap(&a,&b,&c);
    printf("交换后：\n");
    printf("a=%d\t b=%d\t c=%d\n",a,b,c);
    return 0;
}
void cyclicSwap(int *a,int *b,int *c)
{
    int temp;
    temp = *b;
    *b=*a;
    *a=*c;
    *c=temp;
    
}