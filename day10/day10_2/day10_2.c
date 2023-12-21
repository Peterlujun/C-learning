#include<Stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for(i = 9; i > 0; i--)
	{
		//printf("%d\n",i);
		for(j = 1;j <= i;j++)
			printf("%d*%d=%d\t",i,j,i*j);
		printf("\n");	
	}
	return 0;
}
