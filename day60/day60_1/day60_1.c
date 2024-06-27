#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct LNode {
    int data;
    struct LNode *next;
} LNode,*LinkList;
LinkList CreateList(int n);
void print(LinkList h);
int main()
{
    LinkList Head = NULL;
    int n;
    printf("请输入链表的长度:\n");
    scanf("%d", &n);
    Head = CreateList(n);

    printf("刚刚建立的各链表元素的值为：\n");\
    print(Head);

    printf("\n\n");
    system("pause");
    return 0;
}
LinkList CreateList(int n)
{
    LinkList L,p,q;
    int i;
    L = (LNode*)malloc(sizeof(LNode));  //   结构体指针类型变量
    if(!L)  // 指针指向NULL时
    {
        return 0;  
    }
    L->next = NULL;
    q = L;
    for ( i = 1; i < n; i++)
    {
        p = (LinkList)malloc(sizeof(LNode));
        printf("请输入第%d个元素的值：",i);
        scanf("%d",&(p->data));
        p->next = NULL;
        q->next = p;
        q = p;
    }
    return L;
}
void print(LinkList h)
{
    LinkList p = h->next;
    while (p != NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}