#include <stdio.h>
int main()
{
    int n1,n2;
    int t;
    printf("���������������Կո������\n");
    scanf("%d %d",&n1,&n2);

    while(n2 !=0) {
        t = n1%n2;
        n1 = n2;
        n2 = t;
        printf("n1 = %d n2 = %d t=%d\n",n1,n2,t);
    }
    printf("���Լ��Ϊ%d\n",n1);
    return 0;
}   