#include<stdio.h>
#include<stdlib.h>

struct myarray
{
    int size;
    int top;
    int *arr;
};
void print(struct myarray *pointer)
{
    int i=0;
    int pos=pointer->top;
    while(i<=pos)
    {
        printf("Element at %d is : %d \n",(i+1),pointer->arr[i]);

        i++;
    }

}
void pop(struct myarray * pointer)
{
    pointer->arr[pointer->top+1]=0;
    pointer->top--;
}
int isfull(struct myarray *pointer)
{
    
    if(pointer->top<pointer->size)
    {   
        return 1;
        //printf("the array is not full");
    }
 
    else
    {
        return 0;
        //printf("the array is full");
    }
}

int isempty(struct myarray *pointer)
{
    
    if(pointer->top==-1)
    {
        return 1;   
        //printf("the array is empty");
    }
    else
    {
        return 0;
        //printf("the array is full");
    }
}
void push(struct myarray *pointer,int element)
{
    int pos=pointer->top;
    if(pos<pointer->size)
    {    pointer->arr[pos+1]=element;
        pointer->top++;
    }
 
    else
    {    printf("the array is full");
    }
}
int main()
{

    /*struct myarray * myarraystack;/*this statement will not work because this will only create the pointer
     not provide the memory to the program to perform
     any operation if we set the value of top =-1 or create array that will be deleted or lost just after its storing*/
struct myarray *myarraystack =(struct myarray *)malloc(3);//this wiil provide 3 location to store data which we can use anywhere till its not free
    myarraystack->size=100;
    myarraystack->top=-1;
    myarraystack->arr=(int*)malloc(myarraystack->size * sizeof(int));

    //manualy inserting or pushing the element
    myarraystack->arr[0] = 10;
    myarraystack->top++;
    
    /*if(isempty(myarraystack))
    {
        printf("list is empty");
    }
    else
    {
        printf("list is not empty");
    }
    printf("%d",isfull(myarraystack));*/
    

    //printf("%d",(myarraystack->arr[0]));

    push(myarraystack,20);
    push(myarraystack,30);
    push(myarraystack,40);
    push(myarraystack,50);
    printf("after pushing the elements \n");
    print(myarraystack);
    
    pop(myarraystack);
    pop(myarraystack);
    printf("after popping the element out \n");
    print(myarraystack);
    
    return 0;
}