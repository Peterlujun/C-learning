#include <stdio.h>
const int MAX = 3;
int main()
{
 /*
    int var[] = {10,20,30,40,50};
    int i,*ptr[sizeof(var)/sizeof(var[0])];
    for(i=0;i<sizeof(var)/sizeof(var[0]);i++) 
    {
        ptr[i] = &var[i];
    }
    for(i=0;i<sizeof(var)/sizeof(var[0]);i++)
    {
        printf("*ptr[%d] = %d\n",i,*ptr[i]);
    }
*/
    const char *names[] = {"Huawei","Xiaomi","OPPO","Iphone","Samsung","Meizhu"};
    int i;
    for(i=0;i<(sizeof(names)/sizeof(names[0]));i++) 
    {
        printf("names[%d] = %s\n",i,names[i]);
    }
    return 0;
}