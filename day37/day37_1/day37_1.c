#include <stdio.h>
int main()
{
    int x,y,z,t;
    printf("\n请输入三个数字：\n");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y)
    {
        t = x;
        x = y;
        y = t;
    }
    if(y>z)
    {
        t = y;
        y = z;
        z = t;
    }
    printf("从小到大排序：%d %d %d\n",x,y,z);
}