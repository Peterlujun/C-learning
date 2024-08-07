#include <stdio.h>

struct student
{
    int x;
    char c;
}a;
void function(struct student b) ;

int main()
{
    a.x = 3;
    a.c ='a';
    function(a);
    printf("%d,%c", a.x, a.c);
    return 0;
}
void function(struct student b)
{
    b.x = 20;
    b.c = 'y';
}