#include<Stdio.h>
int main()
{
	double firstNumber,secondNumber,temporaryVariable;
	
	printf("�������һ�����֣�");
	scanf("%lf",&firstNumber);
	
	printf("������ڶ�������");
	scanf("%lf",&secondNumber);
	
	 temporaryVariable = firstNumber;
	 
	 firstNumber = secondNumber;
	 
	 secondNumber = temporaryVariable;
	 
	 printf("\n������firstNumber = %.2lf\n",firstNumber);
	 printf("������secondNumber = %.2lf",secondNumber);
	 
	 return 0;
}
