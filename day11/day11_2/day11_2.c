#include<Stdio.h>
int main()
{
	int i ,n ,t1 = 1, t2 = 1, nextNum;
	printf("������");
	scanf("%d",&n);
	
	printf("���쳲��������У�");
	
	for (i = 1;i<n;i++)
	{
		if(i == 1 )
		 {
		 	printf("%d,",t1);
		 }
		else if (i == 2 )
		{
			printf("%d,",t2);
		}
		else
		{
		nextNum = t1 + t2;
		printf("%d,",nextNum);
		t1 = t2;
		t2 = nextNum;
		}

	 } 
	 return 0;
}
