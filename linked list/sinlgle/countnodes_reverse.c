#include <stdio.h>
#include <stdlib.h>
struct n
{
    int data;
    struct n *next;
};
struct n *head;
void countnodes()
{
    struct n *p;
    p = head;
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    printf(" No.of nodes: %d\n", count);
}
void reversenode(){
    
}
void main()
{
    head = (struct n *)malloc(sizeof(struct n));
    struct n *secondnode;
    struct n *thirdnode;
    thirdnode = (struct n *)malloc(sizeof(struct n));
    secondnode = (struct n *)malloc(sizeof(struct n));
    head->data = 34;
    head->next = secondnode;
    secondnode->data = 45;
    secondnode->next = thirdnode;
    thirdnode->data = 43;
    thirdnode->next = NULL;
    countnodes();
    struct n *p;
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}