#include <stdio.h>
int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9.0};

    int sum = 0,loop;
    float avg;

    sum = avg = 0;

    for (loop = 0; loop < 10; loop++)
    {
        sum += array[loop] ;
    }
    avg = (float)sum / loop;
    
    printf("ƽ��ֵΪ%.2f", avg);
    
    return 0;
}