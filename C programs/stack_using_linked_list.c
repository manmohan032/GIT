#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * nextpos;
}; 
int isfull(struct node*pointer)
{
    int * p= (int* )malloc(2);
    if(p==NULL)
    {
        
        printf("Memory full");
        return 0;
    }
    else
    {
        return 1;
    }
}

int isempty(struct node*pointer)
{
    
    if(pointer==NULL)
    {
        
        printf("no element");
        return 0;
    }
    else
    {
        return 1;
    }
}

void print(struct node *pointer)
{
    struct node* pointer_to_elements=pointer->nextpos;
    do
    {
        printf("%d",pointer_to_elements->data);
        pointer_to_elements=pointer_to_elements->nextpos;
    
    }while (pointer->nextpos!=NULL);
    
}
struct node* push(struct node * pointer,int n){
    struct node *list_new_element=(struct node *)malloc(2);
    if(isfull(pointer))
    {
        list_new_element->data=n;
        list_new_element->nextpos=NULL;
        pointer=list_new_element;
        return pointer;
    }
    else
    {
        printf("stack overflow");
        return NULL;
    }
}

int main()
{
    struct node * listhead;
    //struct node * listend=(struct node *)malloc(2);
    listhead=NULL;

    listhead=push(listhead,32);
    listhead=push(listhead,42);
    listhead=push(listhead,52);
    listhead=push(listhead,62);

    print(listhead);
    return 0;
}