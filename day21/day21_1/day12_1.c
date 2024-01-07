#include <stdio.h>
int main()
{
    int number,originalNumber,remainder,result = 0;

    printf("请输入三位数：");
    scanf("%d",&number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder =  originalNumber % 10;
        result += remainder * remainder *remainder;
        originalNumber /= 10;
    }
    if (result == number)
    {
        printf("%d是Armstrong数",number);
    }
    else
    {
         printf("%d不是Armstrong数",number);
    }
    return 0;
}