/* 
*   C 数组允许定义可存储相同类型数据项的变量，
*   结构是 C 编程中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。
*   结构体中的数据成员可以是基本数据类型（如 int、float、char 等），也可以是其他结构体类型、指针类型等。
*
*    结构体定义由关键字struct 和结构体名组成，结构体名可自行定义。
*   
*   struct 语句定义了一个包含多个成员的新的数据类型，struct 语句的格式如下：
*   struct tag {
        member-list
        member-list
        member-list  
        ...
    } variable-list ;
*   tag 是结构体标签。
*   member-list 是标准的变量定义，比如 int i; 或者 float f;，或者其他有效的变量定义。
*   variable-list 结构变量，定义在结构的末尾，最后一个分号之前，您可以指定一个或多个结构变量。
*   在一般情况下，tag、member-list、variable-list 这 3 部分至少要出现 2 个。
*/
#include<stdio.h>
//此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
//同时又声明了结构体变量s1
//这个结构体并没有标明其标签
struct
{
    int a;
    char b;
    double e;
} s1;
// s1 为结构体变量
//此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
//结构体的标签被命名为SIMPLE,没有声明变量
struct SIMPLE
{
    int a;
    char b;
    double c;
};
//用SIMPLE标签的结构体，另外声明了变量t1、t2、t3
struct SIMPLE t1, t2[20], *t3;
// 使用 typedef 创建新类型
typedef struct 
{
    int a;
    char b;
    double c;
}Simple2;  // 别名
// 使用Simple2 定义变量
Simple2 u1,u2[20],*u3;
//此结构体的声明包含了其他的结构体
struct COMPLEX
{
    char string[100];
    struct SIMPLE a;
};

//此结构体的声明包含了指向自己类型的指针
struct NODE
{
    char string[100];
    struct NODE *next_node;
};

typedef struct  Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
}Book1;
Book1 book = {"C语言","RUNOOB","编程语言",111};
int main()
{
    printf("title: %s\nauthor:%s\nsubject:%s\nbook_id:%d\n",book.title,book.author,book.subject,book.book_id);
    return 0;
}