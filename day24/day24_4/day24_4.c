#include<stdio.h>
#include<math.h>
int convertDecimalToOctal(int decimalNuber);
int main()
{
    int decimalNuber;
    printf("����һ��ʮ��������");
    scanf("%d", &decimalNuber);

    printf("ʮ������ %d ת���˽���Ϊ %d ",decimalNuber,convertDecimalToOctal(decimalNuber));
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
