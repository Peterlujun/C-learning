#include <stdio.h>
/*
    C 指针是一个用数值表示的地址。
    可以对指针进行四种算术运算：++、--、+、-

    指针的每一次递增，它其实会指向下一个元素的存储单元。
    指针的每一次递减，它都会指向前一个元素的存储单元。
    指针在递增和递减时跳跃的字节数取决于指针所指向变量数据类型长度，比如 int 就是 4 个字节。
    
*/
struct point
{
    int x;
    int y;
};
#define MAX_ONE 10
const int MAX = 3;
int main()
{
 #if 0
    int var[] = { 0, 1, 2, 3};
    int *pointer;
    int i = 0;
    pointer = var;
    for(i = 0; i< sizeof(var)/sizeof(int); i++)
    {
        printf("当前pointer的地址为：%d\n",pointer); 
        printf("pointer的值为：%d\n",*pointer);
        printf("当前var数组的值为：%d\n",var[i]);
        pointer++;
    }

    struct point points[] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
    struct point *ptr;
    ptr = points;
    
    printf("初始点：(%d, %d)\n", ptr->x, ptr->y);
    ptr++;
    printf("递增后点：(%d, %d)\n", ptr->x, ptr->y);
    return 0;

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *ptr = &arr[4];
    printf("起始位置的数值为：%d\n",*ptr);
    ptr--;
    printf("第一次递减后的数值为：%d\n",*ptr);
    ptr--;
    printf("第二次递减后的数值为：%d\b",*ptr);
    return 0;

    char str[] ="Hello, world!";
    char *ptr = str;
    printf("初始字符为：%c\n",*ptr);
    ptr=ptr + (5*sizeof(char));
    printf("第5个字符为：%c\n",*ptr);
    ptr = ptr - (sizeof(char) * 1) ;
    printf("第4个字符为：%c\b",*ptr);
    return 0;
/********************************/
/*
    指针比较主要用于确定两个指针是否指向相同的内存位置或确定一个指针是否位于另一个指针之前或之后。
*/
    int a = 5;
    int b = 10;
    int *ptr1 = &a;
    int *ptr2 = &a;
    int *ptr3 = &b;

    if(ptr1 == ptr2)
    {
        printf("ptr1 和 ptr2指向相同的内存地址\n");
    }
    else
    {
        printf("ptr1 和 ptr2指向不同的内存地址\n");
    }
    if(ptr1 != ptr3)
    {
        printf("ptr1 和 ptr3指向不同的内存地址\n");
    }
    else
    {
        printf("ptr1 和 ptr3指向相同的内存地址\n");
    }
    return 0;

    int arr[] = {10,20,30,40,50};
    int *ptr1 = &arr[1];
    int *ptr2 = &arr[3];

    if(ptr1 < ptr2)
    {
        printf("ptr1 在 ptr2之前\n");
    }
    else
    {
        printf("ptr1 不在 ptr2之前\n");
    }
    if(ptr1 > ptr2)
    {
        printf("prt1在ptr2之后\n");
    }
    else
    {
        printf("prt1不在ptr2之前或相同位置\n");
    }
    return 0;
/*###########################################################################*/
    int arr[]= {10,20,30,40,50};
    int *start = arr;
    int *end = &arr[4];
    for(start; start<end;start++)
        {
            printf("地址%p上存储的数值为%d\n",start,*start);
        }
    return 0;
#endif
/*****************************************************************************
 * C 指针数组是一个数组，其中的每个元素都是指向某种数据类型的指针。
 * 指针数组存储了一组指针，每个指针可以指向不同的数据对象
 * 指针数组通常用于处理多个数据对象，例如字符串数组或其他复杂数据结构的数组。
******************************************************************************/
    int var[] = {10,100,200};
    int i;
    for(i=0;i<MAX_ONE;i++)
        printf("%d\n",var[i]);
    return 0;
}