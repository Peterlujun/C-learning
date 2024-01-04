#include<stdio.h>
void fun1(void)
{
    printf("fun1\n");
}

void fun2(void)
{
    printf("fun2\n");
}
int main()
{
    void (*pfun)(void);
    
    pfun = fun1;

    pfun();
    pfun = fun2;

    pfun();

    return 0;
}