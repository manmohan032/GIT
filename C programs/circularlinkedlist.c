#include<stdio.h>
#include<stdlib.h>
struct node//node is defined as set of two element first data and a pointer to next position so its size is 2
{
    int data;
    struct node * nextpos;
};


void print(struct node *firstpos)
{
    struct node*pos=firstpos;
    do
    {
    printf("Elemenet is : %d\n",(pos->data));
    pos = pos->nextpos;
    }while(pos!=firstpos);


}
struct node * addatfirstpos(struct node *head,int element)
{
    struct node *pointer_to_new_element = (struct node*)malloc(2);
    
    pointer_to_new_element->nextpos=head;
    pointer_to_new_element->data=element;
    struct node* pointer=head->nextpos;
    while(pointer->nextpos!=head)
    {
        pointer =pointer->nextpos;
    }
    pointer->nextpos=pointer_to_new_element;//this pointer will point to last element.
    return pointer_to_new_element;
}
struct node * addatendpos(struct node *end_pointer,int element)
{/*if we have the end pointer and 
if we dont know the end pointer so we will use head pointer and get the end pointer using while loop.*/
    struct node *pointer_to_new_element = (struct node*)malloc(2);
    pointer_to_new_element->nextpos=end_pointer->nextpos;

    
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
    int i=1;
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
    e->nextpos = f;//this will point to first node.
    printf("printing the manual added elements \n");
    print(f);

    f=addatfirstpos(f,52);
    printf("printing after adding  element at first \n");
    print(f);

    e=addatendpos(e,2);
    printf("printing after adding  element at end \n");
    print(f);

    add_in_btw_pos(f,29,3);
    printf("printing after adding  element after position 3 \n");
    print(f);
    
    add_after_a_pointer(s,39);
    printf("printing after adding  element after pointer s \n");
    print(f);
    //
    return 0;
} 