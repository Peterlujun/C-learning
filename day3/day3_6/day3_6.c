#include<Stdio.h>
int main()
{
	int a,b;
	a = 1;
	b = 3;
	
	printf("����֮ǰ -\n a = %d, b = %d\n", a, b);
	printf("\n");
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("����֮�� -\n a = %d, b = %d \n", a, b);
	printf("\n");
	int  c, d;
	c = 3;
	d = 4;
	printf("����֮ǰ -\n c = %d, d = %d\n", c, d);
	printf("\n");
	c = c ^ d;
	d = c ^ d;
	c = c ^ d;
	printf("����֮�� -\n c = %d, d = %d \n", c, d);
	printf("\n");
	return 0;
}
