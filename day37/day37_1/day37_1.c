#include <stdio.h>
int main()
{
    int x,y,z,t;
    printf("\n�������������֣�\n");
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
    printf("��С��������%d %d %d\n",x,y,z);
}