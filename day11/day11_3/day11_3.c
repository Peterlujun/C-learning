#include<Stdio.h>
int main()
{
	int t1 = 1,t2 = 1,nextNum = 0,n;
	printf("����һ����������");
	scanf("%d",&n);
	
	printf("쳲���������:%d, %d, ",t1,t2);
	nextNum = t1 + t2;
	while(nextNum<n)
	{
		printf("%d��",nextNum);
		t1 = t2;
		t2 = nextNum;
		nextNum = t1 + t2;
	 } 
	return 0;
}
