#include<Stdio.h>
/*
指针也就是内存地址，指针变量是用来存放内存地址的变量。
指针变量声明的一般形式为：
    type *var_name
*/
int main()
{
    int i = 0;
    int * p,*n = NULL;
    p = &i;
    if(n == NULL)
    printf("地址变量n的地址为空\n");
    printf("地址变量n的地址为：%p\n", n);
    printf("p的地址为：%p\n", p);
    printf("变量i的地址为：%p\n", &i);
    printf("地址p存储的值为：%d\n",*p);
    printf("变量i的值为：%d\n", i);
    return 0;
}

