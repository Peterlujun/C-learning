#include<Stdio.h>
int main()
{
	int a,b,c;
	c = 11;
	b = 22;
	c = 33;
	
	if(a>b&&a>c)
		printf("三者最大的数为%d\n",a);
	else if (b>a&&b>c)
		printf("三者最大的数为%d\n",b);
	else if (c>a&&c>b)
		printf("三者最大的数为%d\n",c);
	else 
		printf("有两个或三个数相等");
	
	return 0; 
}
