#include<stdio.h>
int main()
{
    char operator;
    double firstNumber,secondNumber;
    printf("请输入操作符（+，-，*，/）:");
    scanf("%c",&operator);

    printf("请输入两个数字：");
    scanf("%lf %lf",&firstNumber,&secondNumber);

    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf",firstNumber,secondNumber,firstNumber+secondNumber);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf",firstNumber,secondNumber,firstNumber-secondNumber);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf",firstNumber,secondNumber,firstNumber*secondNumber);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf",firstNumber,secondNumber,firstNumber/secondNumber);
        break;

    default:
        printf("Error! operator is no correct");
    }
    return 0;
}