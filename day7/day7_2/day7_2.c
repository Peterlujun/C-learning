#include<stdio.h>
int main()
{
	double number;
	printf("请输入一个数字：");
	scanf("%lf",&number);
	
	if(number<0.0)
		printf("你输入的数是负数。");
	else if(number>0.0)
		printf("你输入的数是正数。");
	else
		printf("你输入的数是0。") ; 
	return 0;
}
