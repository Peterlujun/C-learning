#include<stdio.h>
int main()
{
	double number;
	printf("������һ�����֣�");
	scanf("%lf",&number);
	
	if(number<0.0)
		printf("����������Ǹ�����");
	else if(number>0.0)
		printf("�����������������");
	else
		printf("�����������0��") ; 
	return 0;
}
