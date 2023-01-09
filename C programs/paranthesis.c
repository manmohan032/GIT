#include<stdio.h>
#include<stdlib.h>

struct paranthes
{
    char cha;
    struct parranthes * next;
};


void check(struct paranthes *point,char *ch)
{
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='(')
        {
            struct paranthes *list_new_element=(struct paranthes *)malloc(2);
            list_new_element->cha=ch;
            list_new_element->next=point;
            point=list_new_element;
        
        }
        else if(ch==')'&&point!=NULL)
        {
            point=point->next;
        }
        else if(ch==')'&&point==NULL)
        {
            printf("Invalid paranthesis in expression\n");
        }
    }
    if(point==NULL)
    {
        printf("Valid paranthesis in expression \n");
    }
    else
    {
        printf("Invalid paranthesis in expression\n");    
    }

}
int main()
{
    char * expresion ="8*(3*5)";

    return  0;
}