#include<stdio.h>
#include<stdlib.h>
#include<string.h>//to import the string library to use in the program 

struct stack 
{
    int size;
    int top;
    char *arr;
    
};// created a stack to use it to store a char array to operate on operator 

int check(char ch)//to check and return the value of presedence and if it is not any operator than 0
{
    if(ch=='/')
    {
        return 4;
    }
    if(ch=='*')
    {
        return 3;
    }
    if(ch=='+')
    {
        return 2;
    }
    if(ch=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*int isoperator(char ch)//this is of no use as the check function will check wheather its operator or a character and return 0 after that
{
    if(ch=='*'||ch=='/'||ch=='+'||ch=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}*/
int isfull(struct stack *pointer)//as the name suggest this function check wheather the stack is full or not
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

int isempty(struct stack *pointer)//as the name suggest this function check wheather the stack any element or not
{
    
    if(pointer->top == -1)
    {
        return 1;   
        //printf("the array is empty");
    }
    else
    {
        return 0;
        //printf("the array have some elements");
    }
}
char stacktop(struct stack*pointer)//this will provide the topmost element
{
    return pointer->arr[pointer->top];
}
void push(struct stack *pointer,char element)//this will push the character given to the stack character array
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
char pop(struct stack * pointer)//this will pop the topmost element present in the pointers character array.
{
    if(isempty(pointer))
    {
        printf("stack underflow");
        return -1;
    }
    char val = pointer->arr[pointer->top];
    pointer->top--;
    return val;
}
char *change_into_post(char *exp)//this will change the infix expression into postfix which i dont know the fucking use of😂😂
{
    struct stack * head = (struct stack*)malloc(sizeof(struct stack));
    head->size=10;
    head->top=-1;
    head->arr=(char *)malloc(sizeof(char)*(head->size));
    char * postfix= (char *)malloc(sizeof(char)*(strlen(exp)+1));
    int i=0;
    int j=0;
    while(exp[i]!='\0')//this will help in extracting character till end
    {
        if(check(exp[i])==0)//this will only add characters in postfix
        {
            printf("1%c\n",exp[i]);
            postfix[j]=exp[i];
            i++;
            j++;
        }
        else//this is to add operators with postfix precedence
        {
            if(check(exp[i])>check(stacktop(head)))
            {
                
                push(head,exp[i]);
                i++;

            }
            else 
            {
                
                postfix[j]=pop(head);
                //printf("%c2\n",postfix[j]);
                j++;
            }
        }
    }
    while(!isempty(head))//as the stack could have elements left lower presedence in it so we need them too.
    {
        postfix[j]=pop(head);
        j++;
    }
    postfix[j]='\0';
    
    return postfix;
}
int main()
{
    char *exp="x+y/z-k*d";

    printf("changed expressing to postfix is :%s",change_into_post(exp));

    return 0;
}