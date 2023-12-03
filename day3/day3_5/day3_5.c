#include<Stdio.h>
int main()
{
	double firstNumber,secondNumber,temporaryVariable;
	
	printf("请输入第一个数字：");
	scanf("%lf",&firstNumber);
	
	printf("请输入第二个数：");
	scanf("%lf",&secondNumber);
	
	 temporaryVariable = firstNumber;
	 
	 firstNumber = secondNumber;
	 
	 secondNumber = temporaryVariable;
	 
	 printf("\n交换后，firstNumber = %.2lf\n",firstNumber);
	 printf("交换后，secondNumber = %.2lf",secondNumber);
	 
	 return 0;
}
