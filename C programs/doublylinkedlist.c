#include<stdio.h>
#include<stdlib.h>
struct node//node is defined as set of two element first data and a pointer to next position so its size is 2
{
    struct node * prevpos;
    int data;
    struct node * nextpos;
};


void printclockwise(struct node *pos)
{
    while(pos!=NULL)
    {
    printf("Elemenet is : %d\n",(pos->data));
    pos = pos->nextpos;
    }

}

void print_anticlockwise(struct node *pos)
{
    while(pos!=NULL)
    {
    printf("Elemenet is : %d\n",(pos->data));
    pos = pos->prevpos;
    }

}

struct node * addatfirstpos(struct node *head,int element)
{
    struct node *pointer_to_new_element = (struct node*)malloc(3);
    pointer_to_new_element->prevpos=NULL;
    pointer_to_new_element->nextpos=head;
    pointer_to_new_element->data=element;
    head->prevpos=pointer_to_new_element;
    return pointer_to_new_element;
}
struct node * addatendpos(struct node *end_pointer,int element)//if we have the end pointer.
{
    struct node *pointer_to_new_element = (struct node*)malloc(2);
    
    pointer_to_new_element->nextpos=NULL;
    pointer_to_new_element->data=element;
    pointer_to_new_element->prevpos=end_pointer;
    end_pointer->nextpos=pointer_to_new_element;
    return pointer_to_new_element;

}
void add_after_a_pointer(struct node*point,int element)
{
    struct node *pointer_to_new_element = (struct node*)malloc(2);
    pointer_to_new_element->nextpos=point->nextpos;
    pointer_to_new_element->prevpos=point;
    ((point)->nextpos)->prevpos=pointer_to_new_element;//this will change the next node previous position to new element position 
    point->nextpos=pointer_to_new_element;
    pointer_to_new_element->data=element;
}
void add_in_btw_pos(struct node * head,int element,int pos)
{
    int i=1;
    struct node *pointer_to_element=(struct node *)malloc(2);
    struct node*pointer_to_current_element= head;
    
    while(i!=pos-1)
    {
              
        i++;
        pointer_to_current_element=pointer_to_current_element->nextpos;
    }
    pointer_to_element->nextpos=pointer_to_current_element->nextpos;
    pointer_to_element->prevpos=pointer_to_current_element;
    ((pointer_to_current_element)->nextpos)->prevpos=pointer_to_element;
    pointer_to_current_element->nextpos=pointer_to_element;
    pointer_to_element->data=element;
}
int main()
{
    struct node * f;
    struct node * s;
    struct node * t;
    struct node * e;
     
    f=(struct node *)malloc(3);//as the struct has 3 elemenets its size is 3 now so any commmand is valid wheaather sizeof or the value of 2.
    s=(struct node *)malloc(3);
    t=(struct node *)malloc(sizeof(struct node));
    e=(struct node *)malloc(sizeof(struct node));
    f->prevpos=NULL;
    f->data = 42;
    f->nextpos = s;

    s->prevpos=f;
    s->data = 32;
    s->nextpos = t;

    t->prevpos=s;
    t->data = 22;
    t->nextpos = e ;

    e->prevpos=t;
    e->data = 12;
    e->nextpos = NULL;
    printf("printing the manual added elements clockwise\n");
    printclockwise(f);
    printf("printing the manual added elements anticlockwise\n");
    print_anticlockwise(e);

    f=addatfirstpos(f,52);
    //printf("printing after adding  element at first \n");
    //print(f);

    e=addatendpos(e,2);
    //printf("printing after adding  element at end \n");
    //print(f);

    add_in_btw_pos(f,29,3);
    //printf("printing after adding  element after position 3 \n");
    //print(f);
    
    add_after_a_pointer(s,39);
    //printf("printing after adding  element after pointer s \n");
    //print(f);
    printf("printing clockwise \n");
    printclockwise(f);

    printf("printing anticlockwise \n");
    print_anticlockwise(e);
    return 0;
}