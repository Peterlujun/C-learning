#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];
    int len;
 
    printf("ÊäÈë×Ö·û´®: ");
    scanf("%s", s);
    len = strlen(s);
 
    printf("×Ö·û´®³¤¶È: %d", len);
    return 0;
}