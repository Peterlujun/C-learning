#include <stdio.h>
 
int main()
{
   char str[1000], ch;
   int i, frequency = 0;
 
   printf("�����ַ���: ");
   fgets(str, (sizeof str / sizeof str[0]), stdin);
 
   printf("����Ҫ���ҵ��ַ�: ");
   scanf("%c",&ch);
 
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }
 
   printf("�ַ� %c ���ַ����г��ֵĴ���Ϊ %d", ch, frequency);
 
   return 0;
}