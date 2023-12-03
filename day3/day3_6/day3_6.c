#include<Stdio.h>
int main()
{
	int a,b;
	a = 1;
	b = 3;
	
	printf("交换之前 -\n a = %d, b = %d\n", a, b);
	printf("\n");
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("交换之后 -\n a = %d, b = %d \n", a, b);
	printf("\n");
	int  c, d;
	c = 3;
	d = 4;
	printf("交换之前 -\n c = %d, d = %d\n", c, d);
	printf("\n");
	c = c ^ d;
	d = c ^ d;
	c = c ^ d;
	printf("交换之后 -\n c = %d, d = %d \n", c, d);
	printf("\n");
	return 0;
}
