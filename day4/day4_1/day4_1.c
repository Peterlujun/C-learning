#include<Stdio.h>
int main()
{
	int number;
	
	printf("请输入一个整数：");
	scanf("%d",&number);
	
	if(number % 2 == 0)
		printf("%d 是偶数。",number);
	else
		printf("%d 是奇数。",number);
	
	return 0;
} 
