/* 
*   C ����������ɴ洢��ͬ����������ı�����
*   �ṹ�� C �������һ���û��Զ���Ŀ��õ��������ͣ����������洢��ͬ���͵������
*   �ṹ���е����ݳ�Ա�����ǻ����������ͣ��� int��float��char �ȣ���Ҳ�����������ṹ�����͡�ָ�����͵ȡ�
*
*    �ṹ�嶨���ɹؼ���struct �ͽṹ������ɣ��ṹ���������ж��塣
*   
*   struct ��䶨����һ�����������Ա���µ��������ͣ�struct ���ĸ�ʽ���£�
*   struct tag {
        member-list
        member-list
        member-list  
        ...
    } variable-list ;
*   tag �ǽṹ���ǩ��
*   member-list �Ǳ�׼�ı������壬���� int i; ���� float f;������������Ч�ı������塣
*   variable-list �ṹ�����������ڽṹ��ĩβ�����һ���ֺ�֮ǰ��������ָ��һ�������ṹ������
*   ��һ������£�tag��member-list��variable-list �� 3 ��������Ҫ���� 2 ����
*/
#include<stdio.h>
//������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
//ͬʱ�������˽ṹ�����s1
//����ṹ�岢û�б������ǩ
struct
{
    int a;
    char b;
    double e;
} s1;
// s1 Ϊ�ṹ�����
//������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
//�ṹ��ı�ǩ������ΪSIMPLE,û����������
struct SIMPLE
{
    int a;
    char b;
    double c;
};
//��SIMPLE��ǩ�Ľṹ�壬���������˱���t1��t2��t3
struct SIMPLE t1, t2[20], *t3;
// ʹ�� typedef ����������
typedef struct 
{
    int a;
    char b;
    double c;
}Simple2;  // ����
// ʹ��Simple2 �������
Simple2 u1,u2[20],*u3;
//�˽ṹ������������������Ľṹ��
struct COMPLEX
{
    char string[100];
    struct SIMPLE a;
};

//�˽ṹ�������������ָ���Լ����͵�ָ��
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
Book1 book = {"C����","RUNOOB","�������",111};
int main()
{
    printf("title: %s\nauthor:%s\nsubject:%s\nbook_id:%d\n",book.title,book.author,book.subject,book.book_id);
    return 0;
}