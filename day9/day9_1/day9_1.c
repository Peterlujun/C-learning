#include<stdio.h>
int main()
{
	int a=0x1234;
	char b = a;
	char c = (char) a;
	printf("b = %d, c= %d\n",b,c);
	printf("&b = %p, &c =%p",&b,&c);
	return 0;
}
