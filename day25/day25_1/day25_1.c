#include<stdio.h>
void reverseSentence();
int main()
{
    printf("ÊäÈëÒ»¸ö×Ö·û´®£º");
    reverseSentence();

    return 0;
}
// µİ¹é
void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if ( c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}
