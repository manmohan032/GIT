#include<stdio.h>
#include<stdlib.h>

struct node
{
    char cha;
    struct node * next;
};


void check(struct node *point,char *ch)
{
    int p=1;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='('||ch[i]=='['||ch[i]=='{')
        {
            struct node *list_new_element=(struct node *)malloc(2);
            list_new_element->cha=ch[i];
            list_new_element->next=point;
            point=list_new_element;
            //printf("%c\n",ch[i]);
        }
        else if((ch[i]==')'||ch[i]==']'||ch[i]=='}')&&point!=NULL)
        {
            point=point->next;
        }
        else if((ch[i]==')'||ch[i]==']'||ch[i]=='}')&&point==NULL)
        {
            printf("Invalid number of parinthesis in expression\n");
            p=0;
            break;
            
        }
    }
    if(point==NULL&&p!=0)
    {
        printf("Valid number of paranthesis in expression \n");

    }
    else if(point!=NULL)
    {
        printf("Invalid number of parenthesis in expression\n");  

    }

}
int main()
{
    struct node *point =NULL;
    char * expresion ="{[*(3*5]]}";
    check(point,expresion);
    return  0;
}