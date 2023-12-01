#include<Stdio.h>
int main()
{
	float num1,num2,product;
	
	printf("请输入第一个浮点数：");
	scanf("%f",&num1);
	
	printf("请输入第二个浮点数：");
	scanf("%f",&num2);
	
	product = num1 * num2;
	printf("%.2f 乘于 %.2f等于%.2f\n",num1,num2,product);
	
	return 0; 
}
