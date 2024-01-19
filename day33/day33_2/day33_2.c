#include<stdio.h>
int main()
{
    float fahr,celsius;
    float lower,upper,step;
    
    lower = -20;
    upper = 150;
    step = 10;
    
    celsius = lower;
    printf("摄氏温度     华氏温度\n");
    while(celsius <= upper)
    {   
        fahr =  celsius *(9.0 / 5.0) + 32.0;
        //celsius = (5.0 / 9.0 )*(fahr - 32.0);
        printf("%3.0f        %6.1f\n",celsius,fahr);
        celsius = celsius + step;
    }
}