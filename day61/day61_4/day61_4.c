/*
    ��������һ��������������ͣ�����������ͬ���ڴ�λ�ô洢��ͬ���������͡�
    ����һ�����ж��Ա�Ĺ����壬�����κ�ʱ��ֻ����һ����Ա����ֵ��
    �������ṩ��һ��ʹ����ͬ���ڴ�λ�õ���Ч��ʽ��
*/
#include <stdio.h>
#include <string.h>
 
union Data
{
   int i;
   float f;
   char  str[20];
};
 
int main( )
{
   union Data data;        
 
   printf( "Memory size occupied by data : %d\n", sizeof(data));
 
   return 0;
}