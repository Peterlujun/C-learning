#include <stdio.h>
int main()
{
    char c;
    printf("����u��ʾ��д��ĸ������l��ʾСд��ĸ��");
    scanf("%c", &c);

    if (c == 'U' || c == 'u')
    {
        for (c='A' ; c <'Z' ; c++)
        {
            printf("%c ", c);
        }
        
    }
    else if (c == 'L' || c == 'l')
    {
        for (c='a' ; c < 'z'; c++)
        {
            printf("%c ", c);
        }
        
    }
    else 
        printf("Error! ����Ƿ��ַ�");
}