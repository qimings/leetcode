/******************
 * 创建一个链表
 *
 * ****************/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    /* data */
    int num;
    struct node *next;
} Nodes;

Nodes *generatelink(int num);
int main()
{
    Nodes *p, *head;

    head = generatelink(10);
    p = head->next;
    while (p)
    {

        printf("the num is %d\n", p->num);
        p = p->next;
    }
    return 0;
}

/**********
 * 函数名：generatelink()
 * 作用：创建一个单向链表
 * 输入：int num
 * 输出：Node *head
 * 
 * 
**************/
Nodes *generatelink(int num)
{
    Nodes *head, *p, *temp;
    p = (Nodes *)malloc(sizeof(Nodes));

    head = p;
    for (int i = 0; i < 10; i++)
    {
        temp = (Nodes *)malloc(sizeof(Nodes));
        temp->num = i + 1;
        temp->next = NULL;
        p->next = temp;

        p = p->next;
    }
    p->next = NULL;

    return head;
}