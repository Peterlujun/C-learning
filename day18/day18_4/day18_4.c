#include <stdio.h>
#include <math.h>
int main()
{
    double base,exponent,result;
    printf("����");
    scanf("%lf",&base);

    printf("ָ��");
    scanf("%lf",&exponent);

    result = pow(base,exponent);
    
    printf("%.1lf^%.1lf=%.2lf", base,exponent, result);
    return 0;
}