#include<Stdio.h>

int main()
{
#if 0 
	float num1,num2,product;
	
	printf("请输入第一个浮点数：");
	scanf("%f",&num1);
	
	printf("请输入第二个浮点数：");
	scanf("%f",&num2);
	
	product = num1 * num2;
	printf("%.2f 乘于 %.2f等于%.2f\n",num1,num2,product);
	
	return 0; 
#else 


    double firstNumber, secondNumber, product;
    printf("输入两个浮点数: ");
 
    // 用户输入两个浮点数
    scanf("%lf %lf", &firstNumber, &secondNumber);  
 
    // 两个浮点数相乘
    product = firstNumber * secondNumber;  
 
    // 输出结果， %.2lf 保留两个小数点
    printf("结果 = %.2lf", product);
    
    return 0;
#endif
}







