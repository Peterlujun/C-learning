#include<stdio.h>
#include <stdbool.h>
int main()
{
    int c;
    bool b;
    printf("�������ַ�\n");
    c= getchar();
    printf("%c\n",EOF);

    while(c!= EOF)
    {
        b=(c!= EOF);
        putchar(c);
        printf("\t");
        printf("%d\n",b);
        c= getchar();
    }
    return 0;
}