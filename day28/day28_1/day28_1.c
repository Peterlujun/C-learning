#include<Stdio.h>
int main()
{
    int data[5],i;
    printf("����Ԫ�أ�\n");
    for ( i = 0; i < 5; i++)
    {
        scanf ("%d",data+i);;
    }
    printf("��������ǣ�\n");
    for( i = 0; i < 5; i++)
        printf("%d\n",*(data+i));
    return 0; 
}