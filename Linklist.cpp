#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};


int main()
{
    struct node *head,*p,*q,*t;
    int i,n,a;
    n=10;
    a=1;
    head=NULL;
    for(i=0;i<n;i++){
        p=(struct node *)malloc(sizeof(struct node));
        p->data = a;a++;
        p->next = NULL;
        if(head==NULL)
            head=p;
        else
            q->next=p;
        q=p;
    }
    //输出链表
    t=head;
    while(t!=NULL){
        printf("%d ",t->data);
        printf("%x\n",t->next);
        t=t->next;
    }
    return 0;
}