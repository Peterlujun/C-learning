#include<stdio.h>
int main()
{
    float h,s;
    h = s= 100;
    h = h/2;
    for(int i=2;i<=10;i++)
    {
        s = s + h*2;
        h = h/2;
    }
    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n",s,h);
    return 0;
}