#include<stdio.h>
int main()
{
    int i,x,y,z;
    for(i = 100;i < 1000;i++)
    {
        x = i % 10;
        y = i / 10 % 10;
        z = i / 100 % 10;

        if(i == (x*x*x + y*y*y + z*z*z))
            printf("%d\n",i);
    }
    return 0;
}