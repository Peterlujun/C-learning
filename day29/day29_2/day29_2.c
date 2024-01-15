#include <stdio.h>
 
int main()
{
    char s[1000], i;
 
    printf("ÊäÈë×Ö·û´®: ");
    scanf("%s", s);
 
    for(i = 0; s[i] != '\0'; ++i);
 
    printf("×Ö·û´®³¤¶È: %d", i);
    return 0;
}