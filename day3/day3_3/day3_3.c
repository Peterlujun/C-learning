#include<Stdio.h>
int main()
{
	int a,b,c;
	c = 11;
	b = 22;
	c = 33;
	
	if(a>b&&a>c)
		printf("����������Ϊ%d\n",a);
	else if (b>a&&b>c)
		printf("����������Ϊ%d\n",b);
	else if (c>a&&c>b)
		printf("����������Ϊ%d\n",c);
	else 
		printf("�����������������");
	
	return 0; 
}
