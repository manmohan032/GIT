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
struct node * addatfirstpos(struct node *head,int element)
{
    struct node *pointer_to_new_element = (struct node*)malloc(2);
    
    pointer_to_new_element->nextpos=head;
    pointer_to_new_element->data=element;
    return pointer_to_new_element;
}
struct node * addatendpos(struct node *end_pointer,int element)//if we have the end pointer.
{
    struct node *pointer_to_new_element = (struct node*)malloc(2);
    end_pointer->nextpos=pointer_to_new_element;
    pointer_to_new_element->nextpos=NULL;
    pointer_to_new_element->data=element;
    end_pointer->nextpos=pointer_to_new_element;
    return pointer_to_new_element;

}
void add_after_a_pointer(struct node*point,int element)
{
    struct node *pointer_to_new_element = (struct node*)malloc(2);
    pointer_to_new_element->nextpos=point->nextpos;
    point->nextpos=pointer_to_new_element;
    pointer_to_new_element->data=element;
}
void add_in_btw_pos(struct node * head,int element,int pos)
{
    int i=0;
    struct node *pointer_to_element=(struct node *)malloc(2);
    struct node*pointer_to_current_element= head;
    while(i!=pos)
    {
        if(i==pos-1)
        {
            pointer_to_element->nextpos=pointer_to_current_element->nextpos;
            pointer_to_current_element->nextpos=pointer_to_element;
            pointer_to_element->data=element;
        }
        i++;
        pointer_to_current_element=pointer_to_current_element->nextpos;
    }
}
void delete_at_first(struct node* head)
{

    struct node* pointer_to_next =head->nextpos;
    head->data=pointer_to_next->data;
    head->nextpos=pointer_to_next->nextpos;
    free(pointer_to_next);
}
void delete_at_end(struct node *head)
{
    struct node* pointer_at_element = head->nextpos;
    struct node* pointer_at_beforeend = head->nextpos;
    
    while(pointer_at_element->nextpos!=NULL)
    {
        pointer_at_beforeend=pointer_at_element;
        pointer_at_element=pointer_at_element->nextpos;
    }
    pointer_at_beforeend->nextpos=NULL;
    free(pointer_at_element);
}
void delete_in_btw(struct node *head,int pos)
{
    struct node *pointer_at_element=head;
    struct node *pointer_at_after_element=head->nextpos;
    
    int i=1;
    while(i!=pos-1)
    {
        pointer_at_element=pointer_at_element->nextpos;
        pointer_at_after_element=pointer_at_element->nextpos;
        i++;
    }
    pointer_at_element->nextpos=pointer_at_after_element->nextpos;
    free(pointer_at_after_element);
}
void deliting_a_value(struct node *head,int value)
{
    struct node* point_at_element=head->nextpos;
    struct node* point_at_before_element=head;
    
    while(value!=point_at_element->data)
    {
        point_at_before_element=point_at_element->nextpos;
        point_at_element=point_at_before_element->nextpos;
        
        if(point_at_element->nextpos==NULL)
        {
            break;
        }

    }
    if(point_at_element->data==value)
    {
        point_at_before_element->nextpos=point_at_element->nextpos;
        free(point_at_element);
    }
    else{
        printf("enter value is  not in the list \n");
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
    //printf("printing the manual added elements \n");
    //print(f);

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
    printf("printing the current list \n");
    print(f);
    //deletion  of elements.
    printf("printing after deleting  first element \n");
    delete_at_first(f);
    print(f);

    printf("printing after deleting  end element \n");
    delete_at_end(f);
    print(f);

    printf("printing after deleting element at pos\n");
    delete_in_btw(f,3);
    print(f);

    deliting_a_value(f,32);
    print(f);

    
 
    return 0;
}