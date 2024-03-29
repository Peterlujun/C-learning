#include<stdio.h>
// 结构体中的数据成员可以是基本数据类型（如 int、float、char 等），也可以是其他结构体类型、指针类型等。
/*
struct tag {
    member_list
    member_list
    member_list  
    ...
} variable_list ;
*/
/*
    tag 是结构体标签。
    member-list 是标准的变量定义，比如 int i; 或者 float f;，或者其他有效的变量定义。
    variable-list 结构变量，定义在结构的末尾，最后一个分号之前，您可以指定一个或多个结构变量
*/



//第一种形式：普通形式，只定义结构体
struct type_one_s
{
    int a;
    int b;
};
// 定义了一个结构体：type_one_s , 此时type_one_s相当于一个类型名字。

// 定义一个结构体变量时：struct type_one_s  type_one1
struct type_one_s type_one1;

/*##################################################################################################### */
/*##################################################################################################### */


// 第二种形式：定义结构体的同时也定义结构体变量
struct type_two_s
{
    int a;
    int b;
} type_two1; 

//定义了一个结构体 type_two_s，在定义结构体的同时也定义了一个结构体变量type_two1,后续可以直接使用type_two1
//定义另外一个结构体变量：struct type_two_s  type_two2
struct type_two_s type_two2;
/*##################################################################################################### */
/*##################################################################################################### */

// 第三种形式：定义结构体的时候缺失结构体名，同时定义结构体变量。
struct 
{
    int a;
    int b;
}type_three1,type_three2;
//这种形式只能使用在定义结构体的同时定义的结构体变量type_three1和type_three2，由于没有结构体名，因此后续不可以再定义新的结构体变量。

/*##################################################################################################### */
/*##################################################################################################### */

// 第四种：使用typedef,定义结构体的同时为结构体取别名
typedef struct type_four_s
{
    int a;
    int b;
}type_four_alias_s;
// 使用这种形式，定义了结构体type_four_s，并为结构体取了个别名：type_four_alias_s

//使用结构体名定义结构体变量,需要加struct
struct type_four_s type_four1 = {13,14}; 

//使用结构体别名定义结构体变量,不需要加struct   
type_four_alias_s type_four2 = {15,16};  


/*##################################################################################################### */
/*##################################################################################################### */

//第五种: 使用typedef，定义结构体缺失结构体名，只取别名

typedef struct 
{
    int a;
    int b;
}type_five_alias_s;

// 这种形式定义了一个缺失结构体名的结构体，但使用typedef为结构体设置了别名。

//在C和C++中，使用别名创建结构体变量，均不需要加struct
// 赋值方式一

type_five_alias_s type_five1 = {17,18};
// 赋值方式二
type_five_alias_s type_five2;
//  type_five2.a = 19;
// type_five2.b = 20; 

/*##################################################################################################### */
/*##################################################################################################### */


struct SIMPLE
{
    char name[50];
};



/*
    结构体的成员可以包含其他结构体，也可以包含指向自己结构体类型的指针，而通常这种指针的应用是为了实现一些更高级的数据结构如链表和树等。
*/

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


// 如果两个结构体互相包含，则需要对其中一个结构体进行不完整声明，如下所示：
struct B;

struct A
{
    struct  B *partner;
};

//结构体B中包含指向结构体A的指针，在A声明完后，B也随之进行声明
struct B
{
    struct A *partner;
    //other members;
};


/* 结构体变量的初始化和其它类型变量一样，对结构体变量可以在定义时指定初始值。*/

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book = {"C 语言", "RUNOOB", "编程语言", 123456};

/*访问结构成员为了访问结构的成员，我们使用成员访问运算符（.）*/

/*指向结构的指针
您可以定义指向结构的指针，方式与定义指向其他类型变量的指针相似，如下所示：  */

struct Books *struct_pointer;

/*现在，您可以在上述定义的指针变量中存储结构变量的地址。为了查找结构变量的地址，请把 & 运算符放在结构名称的前面，如下所示： */

//  struct_pointer = &Book1;

/*
为了使用指向该结构的指针访问结构的成员，您必须使用 -> 运算符，如下所示： */

//      struct_pointer->title;

/*
结构体大小的计算
C 语言中，我们可以使用 sizeof 运算符来计算结构体的大小，sizeof 返回的是给定类型或变量的字节大小。

对于结构体，sizeof 将返回结构体的总字节数，包括所有成员变量的大小以及可能的填充字节。


注意，结构体的大小可能会受到编译器的优化和对齐规则的影响，编译器可能会在结构体中插入一些额外的填充字节以对齐结构体的成员变量，以提高内存访问效率。


*/


