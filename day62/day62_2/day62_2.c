#include<Stdio.h>
//#include<stdlib.h>

double evennumber(int n);
double oddnumber(int n);
int main()
{
    int n;
    double r;
    double (* pfunc)(int n);
    printf("������һ�����֣�\n");
    scanf("%d", &n);
    if(n % 2 == 0)
        pfunc = evennumber;
    else
        pfunc = oddnumber;
    r = (*pfunc)(n);
    printf("%lf\n", r);

 //   system("pause");
    return 0;
}

double evennumber(int n)
{
    double s = 0, a= 0;
    int i;
    for (i = 2; i<= n;i+= 2)
    {
        a = (double) 1/i;
        s += a;
    }
    return s;
}

double oddnumber(int n)
{
    double s = 0, a= 0;
    int i;
    for(i = 1;i<=n;i+= 2)
    {
        a = (double) 1/i;
        s += a;
    }
    return s;
}