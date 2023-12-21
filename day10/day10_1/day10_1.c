#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for(i;i<=9;i++)
	{
		for(j=1;j<=i;++)
			printf("%d*%d=%d\t",j,i,i*j);
		printf("\n");	
	}
	return 0;
}
