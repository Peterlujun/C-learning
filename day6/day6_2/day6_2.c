#include<Stdio.h>
int main()
{
	int year;
	printf("������ݣ�");
	scanf("%d",&year);
	
	if(year%4 == 0 )
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
				printf("%d������",year);
			else
				printf("%d��������",year);
		}
		else
			printf("%d������",year);
	}
	else
		printf("%d��������",year);
	return 0;
}
