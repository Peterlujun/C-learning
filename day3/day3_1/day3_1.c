#include<Stdio.h>
int main()
{
	int dividend,divisor,quotient,remainder;
	
	printf("���뱻������");
	scanf("%d",&dividend);
	
	printf("���������");
	scanf("%d",&divisor);
	
	quotient = dividend / divisor;
	
	remainder = dividend % divisor;
	
	printf("�� = %d\n",quotient);
	printf("���� = %d\n",remainder);
	
	return 0;	
	
}
