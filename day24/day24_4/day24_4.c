#include<stdio.h>
#include<math.h>
int convertDecimalToOctal(int decimalNuber);
int main()
{
    int decimalNuber;
    printf("输入一个十进制数：");
    scanf("%d", &decimalNuber);

    printf("十进制数 %d 转换八进制为 %d ",decimalNuber,convertDecimalToOctal(decimalNuber));
    return 0;
}
int convertDecimalToOctal(int decimalNuber)
{
    int octalNuber = 0, i = 1;
    while (decimalNuber != 0)
    {
        octalNuber += (decimalNuber % 8) * i;
        decimalNuber /= 8;
        i *= 10;
    }
    return octalNuber;
}
