#include <stdio.h>
   int power(int , int);  // ��������   ����������Ϊ����ԭ��
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
    power ����ʹ�õĲ�������ֻ��power�����ڲ���Ч�����������������ɼ���
    ������������ʹ����֮��ͬ�ĺ������ֶ����������ͻ��
    
    �������������ڳ��ֵ� ������Ϊ����ʽ����
    ������������ʽ������Ӧ��ֵ��Ϊʵ�ʱ���
   */
    
    int power(int base, int n)
    {
        int i,  p;
        p = 1;
        for (i = 1; i <= n; ++i)
            p = p * base;
        return p;
    }