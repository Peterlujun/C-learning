#include<Stdio.h>
int main()
{
	double n1,n2,n3;
	
	printf("���������������Կո�ָ���");
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	
	if( n1>n2 && n1>n3)
		printf("������������Ϊ%.2f",n1);
	if( n2>n1 && n2>n3)
		printf("������������Ϊ%.2f",n2);
	if( n3>n1 && n3>n1)
		printf("������������Ϊ%.2f",n3);
	
	return 0;
}
