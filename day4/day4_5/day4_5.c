#include<Stdio.h>
int main()
{
	char c;
	int isLowercaseVowel, isUppercaseVowel;
	
	printf("������һ����ĸ��");
	scanf("%c",&c);
	
	isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i'|| c == 'o'|| c == 'u');
	
	isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I'|| c == 'O'|| c == 'U');
	
	if(isLowercaseVowel || isUppercaseVowel) 
		printf("%c ��Ԫ��",c);
	else
		printf("%c �Ǹ���",c);
	return 0;
	 
}
