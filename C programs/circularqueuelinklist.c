#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}

/*int isfull(struct node *q)
{
    if(q->next==NULL)
    {
        return 1;
    }
    return 0;
}*/
int isempty(struct node *q)
{
    if(q->current==q)
    {
        return 1;
    }
    return 0;
}
void eq(struct node *e,int val)
{
    struct node *new = (struct node*)malloc(2);
    e->next=new;
    new->next=NULL;
    q->data=val; 
}
void dq(struct node *q)
{
    if(!isempty(q))
    {
        q->current=q->next;
    }
    else
    {
        printf("q is empty \n");
    }
}
int main()
{
    struct node *c = NULL;
    struct node *r = NULL;
    

    
    return 0;
}