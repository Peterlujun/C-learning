#include<stdio.h>
int main()
{
    char ch;
    printf("请输入任意字符：（输入字符“#”退出）\n");
    while ((ch = getchar())!= '#')
    {
        putchar(ch);
    }
    return 0;
}