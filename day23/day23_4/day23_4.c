#include<stdio.h>
int main()
{
    char operator;
    double firstNumber,secondNumber;
    printf("�������������+��-��*��/��:");
    scanf("%c",&operator);

    printf("�������������֣�");
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