#include <stdio.h>
void hello_world(void)
{
    printf("Hello,world\n");
}
void three_hellos(void)
{
    int counter = 0;
    for(counter = 0; counter < 3; counter++)
    {
        hello_world();
    }
}
int main()
{
    three_hellos();
}