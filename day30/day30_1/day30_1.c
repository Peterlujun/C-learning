#include<stdio.h>
#include<string.h>

int main()
{
    char src[40];
    char dest[40];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "This is a test");
    strcpy(dest, src);

    printf("���յ�Ŀ���ַ�����%s\n", dest);
    return 0;
}