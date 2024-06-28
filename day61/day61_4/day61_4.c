/*
    共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
    定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。
    共用体提供了一种使用相同的内存位置的有效方式。
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