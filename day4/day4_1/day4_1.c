#include<Stdio.h>
int main()
{
	int number;
	
	printf("������һ��������");
	scanf("%d",&number);
	
	if(number % 2 == 0)
		printf("%d ��ż����",number);
	else
		printf("%d ��������",number);
	
	return 0;
} 
