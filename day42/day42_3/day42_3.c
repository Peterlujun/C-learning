#include<stdio.h>
int main()
{
    int i;
    int fact(int);
    for(i=0; i<6;i++)
        printf("%d!=%d\n", i, fact(i));
}
int fact(int i)
{
    int sum = 0;
    if(i == 0)
        sum = 1;
    else
        sum = i*fact(i-1);
    return sum;
}