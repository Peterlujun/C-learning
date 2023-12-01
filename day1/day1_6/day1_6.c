#include<Stdio.h>
int main()
{
	int firstNumber,secondNumber,sumofTwonumber;
	
	printf("输入两个数（以空格分割）：");
	
	scanf("%d %d",&firstNumber, &secondNumber);
	
	sumofTwonumber = firstNumber + secondNumber;
	
	printf("%d + %d = %d",firstNumber, secondNumber, sumofTwonumber);
	
	return 0;
}
