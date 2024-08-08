#include <stdio.h>
#include<time.h>
int main()
{
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("当地本地时间为：%s\n", asctime(timeinfo));
    
    return 0;
}