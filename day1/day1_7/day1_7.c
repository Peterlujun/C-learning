#include<Stdio.h>

int main()
{
#if 0 
	float num1,num2,product;
	
	printf("�������һ����������");
	scanf("%f",&num1);
	
	printf("������ڶ�����������");
	scanf("%f",&num2);
	
	product = num1 * num2;
	printf("%.2f ���� %.2f����%.2f\n",num1,num2,product);
	
	return 0; 
#else 


    double firstNumber, secondNumber, product;
    printf("��������������: ");
 
    // �û���������������
    scanf("%lf %lf", &firstNumber, &secondNumber);  
 
    // �������������
    product = firstNumber * secondNumber;  
 
    // �������� %.2lf ��������С����
    printf("��� = %.2lf", product);
    
    return 0;
#endif
}







