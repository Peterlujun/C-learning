#include<Stdio.h>
int main()
{
	int a,b;
	
	printf("请输入第一个数字：");
	scanf("%d",&a);
	
	printf("请输入第二个数字：");
	scanf("%d",&b);
	
	printf("开始比较中…\n");
	printf("请等待…\n");
	
	if(a>b)
		printf("两者最大的数为%d\n",a);
	else
		printf("两者最大的数为%d\n",b);
	
	return 0; 
 } 
