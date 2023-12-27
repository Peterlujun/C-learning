#include<Stdio.h>
int main()
{
	int i ,n ,t1 = 0, t2 = 1, nextNum;
	printf("输出几项：");
	scanf("%d",&n);
	
	printf("输出斐波那契数列：");
	
	for (i = 1;i<n;i++)
	{
		printf("%d,",t1);
		nextNum = t1 + t2;
		t1 = t2;
		t2 = nextNum;
	 } 
	 return 0;
}
