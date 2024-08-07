#include <stdio.h>
int main()
{
    register int i;
    int tmp=0;
    for(i=1;i<=100;i++)
        tmp+=i;
    printf("锟杰猴拷为 %d\n",tmp);
    return 0;
}