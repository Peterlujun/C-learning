#include <stdio.h>
#include <stdlib.h>
 
int length(char *s);
 
int main() {
    char str[100]; // ���Ը���ʵ������������鳤��
    printf("�������ַ���:\n");
    scanf("%s", str);
    
    int len = length(str); // ���� length ���������ַ�������
    
    printf("�ַ����� %d ���ַ���\n", len);
    return EXIT_SUCCESS;
}
 
//���ַ�������  
int length(char *s) {  
    int i = 0;
    while (*s != '\0') {  
        i++;   
        s++;  
    }  
    return i;  
}