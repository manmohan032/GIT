#include<stdio.h>
#include<stdlib.h>
struct node//node is defined as set of two element first data and a pointer to next position so its size is 2
{
    int data;
    struct node * nextpos;
};


void print(struct node *pos)
{
    while(pos!=NULL)
    {
    printf("Elemenet is : %d\n",(pos->data));
    pos = pos->nextpos;
    }

}

int main()
{
    struct node * f;
    struct node * s;
    struct node * t;
    struct node * e;
     
    f=(struct node *)malloc(2);//as the struct has 2 elemenets its size is 2 so any commmand is valid wheaather sizeof or the value of 2.
    s=(struct node *)malloc(2);
    t=(struct node *)malloc(sizeof(struct node));
    e=(struct node *)malloc(sizeof(struct node));
    f->data = 42;
    f->nextpos = s;

    s->data = 32;
    s->nextpos = t;

    t->data = 22;
    t->nextpos = e ;

    e->data = 12;
    e->nextpos = NULL;
    print(f);

    
    

}