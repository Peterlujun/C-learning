#include <stdio.h>
int main()
{
    char letter = 'A';

    for (int  i = 0; i < 26; i++)
    {
        printf("%c ", letter);
        letter ++;
    }
    printf ("\n");
    return 0; 
}


