#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sentence[1000];
    FILE *fptr;
    fptr =  fopen( "runoob.txt", "w" );
    if( fptr == NULL )
    {
        printf("Error: Could not open");
        exit(1);
    }
    printf("ÊäÈë×Ö·û´®£º\n");
    fgets( sentence, sizeof sentence /sizeof sentence[0], stdin );

    fprintf( fptr,"%s", sentence );
    fclose( fptr );

    return 0;
}