#include<Stdio.h>
int main()
{
	float num1,num2,product;
	
	printf("�������һ����������");
	scanf("%f",&num1);
	
	printf("������ڶ�����������");
	scanf("%f",&num2);
	
	product = num1 * num2;
	printf("%.2f ���� %.2f����%.2f\n",num1,num2,product);
	
	return 0; 
}
