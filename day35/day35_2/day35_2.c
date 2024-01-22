#include <stdio.h>
   int power(int , int);  // 函数声明   该种声明称为函数原型
    /* test power function */
 int   main()
    {
        int i;
        for (i = 0; i < 10; ++i)
            printf("%d %d %d\n", i, power(2,i), power(-3,i));
        return 0;
    }
    /* power:  raise base to n-th power; n >= 0 */
    /*
    power 函数使用的参数名称只在power函数内部有效。对于其他函数不可见。
    其他函数可以使用与之相同的函数名字而不会引起冲突。
    
    函数定义括号内出现的 变量称为：形式变量
    函数调用与形式参数对应的值称为实际变量
   */
    
    int power(int base, int n)
    {
        int i,  p;
        p = 1;
        for (i = 1; i <= n; ++i)
            p = p * base;
        return p;
    }