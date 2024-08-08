#include <stdio.h>
int main()
{
    int i=1,j=1;
    for(j =10;j>1;j--)
    {
        i++;
        i = 2*i;
    }
    printf("第一天摘了 %d 个桃子。", i);
}