#include<Stdio.h>
int main()
{
	double n1,n2,n3;
	
	printf("请输入三个数，以空格分隔：");
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	
	if( n1>n2 && n1>n3)
		printf("三个数中最大的为%.2f",n1);
	if( n2>n1 && n2>n3)
		printf("三个数中最大的为%.2f",n2);
	if( n3>n1 && n3>n1)
		printf("三个数中最大的为%.2f",n3);
	
	return 0;
}
