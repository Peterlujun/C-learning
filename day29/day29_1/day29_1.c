#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];
    int len;
 
    printf("�����ַ���: ");
    scanf("%s", s);
    len = strlen(s);
 
    printf("�ַ�������: %d", len);
    return 0;
}