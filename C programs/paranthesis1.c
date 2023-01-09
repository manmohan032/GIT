#include<stdio.h>
#include<stdlib.h>

struct node
{
    char cha;
    struct node * next;
};


void check(struct node *point,char *ch)
{
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='(')
        {
            struct node *list_new_element=(struct node *)malloc(2);
            list_new_element->cha=ch[i];
            list_new_element->next=point;
            point=list_new_element;
        
        }
        else if(ch[i]==')'&&point!=NULL)
        {
            point=point->next;
        }
        else if(ch[i]==')'&&point==NULL)
        {
            printf("Invalid number of parinthesis in expression\n");
        }
    }
    if(point==NULL)
    {
        printf("Valid number of paranthesis in expression \n");
    }
    else
    {
        printf("Invalid number of parenthesis in expression\n");    
    }

}
int main()
{
    struct node *point =NULL;
    char * expresion ="8*(3*5)";
    check(point,expresion);
    return  0;
}