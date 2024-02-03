#include <stdio.h>
int main()
{
    int i;
    int sum,mix;
    sum = 0,mix = 1;
    for(i=1;i<=5;i++)
    {
        mix = mix * i;
        sum = sum + mix;
    }
    printf("%d\n",sum); 
}