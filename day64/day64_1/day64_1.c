#include <stdio.h>
#include<time.h>
int main()
{
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("���ر���ʱ��Ϊ��%s\n", asctime(timeinfo));
    
    return 0;
}