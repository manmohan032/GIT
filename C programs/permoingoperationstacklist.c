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
        return 1;
    }
    else
    {
        return 0;
    }
}

void peek(int pos,struct node* pointer)
{
    struct node*pointer_checker=pointer;
    int i=0;
    while (pointer!=NULL&&i<pos-1)
    {
        pointer=pointer->nextpos;
        i++;
    }
    if(pointer==NULL)
    {
        printf("this position is invalid, doesn't exist in this list\n");
    }
    else{
        printf("Element at %d is : %d\n",i+1,pointer->data);
    }

}
void top(struct node* headpointer)
{
    
    if(headpointer==NULL)
    {
        printf("this list don't have any element\n");
    }
    else
    {
        printf("Element at top is : %d\n",headpointer->data);
    }
}
void bottom(struct node* pointer)
{
    while (pointer->nextpos!=NULL)
    {
        pointer=pointer->nextpos;
        
    }
    if(pointer==NULL)
    {
        printf("this list don't have any element\n");
    }
    else{
        printf("Element at bottom is : %d\n",pointer->data);
    }

}
void print(struct node *pointer)
{
    
    while (pointer!=NULL)
    {
        printf("Element is :%d \n",pointer->data);
        pointer=pointer->nextpos;
    
    }
    
}
struct node* push(struct node * pointer,int n){
    if(isfull(pointer))
    {
        struct node *list_new_element=(struct node *)malloc(2);
        list_new_element->data=n;
        list_new_element->nextpos=pointer;
        pointer=list_new_element;
        return pointer;
    }
    else
    {
        printf("stack overflow");
        return NULL;
    }
}
struct node*pop(struct node *pointer)
{
    if(isempty(pointer)==0)
    {
        struct node*prevpoint=pointer;
        return pointer->nextpos;
        free(prevpoint);
    }
    else
    {
        return NULL;
    }
}
int main()
{
    
    //struct node * listend=(struct node *)malloc(2);
    //listhead=NULL;
    struct node * listhead=NULL;

    listhead=push(listhead,32);
    listhead=push(listhead,42);
    listhead=push(listhead,52);
    listhead=push(listhead,62);
    printf("priting after pushing four elements \n");
    print(listhead);

    peek(4,listhead);

    listhead=pop(listhead);
    printf("priting after popping one element out \n");
    print(listhead);
    
    peek(4,listhead);
    top(listhead);
    bottom(listhead);   
    return 0;

}