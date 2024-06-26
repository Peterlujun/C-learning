/*
    访问共用体 使用 成员访问运算符（.）
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
 
   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");
 
   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);
 
   return 0;
}
// 共用体的 i 和 f 成员的值有损坏，因为最后赋给变量的值占用了内存位置
// 这也是 str 成员能够完好输出的原因。