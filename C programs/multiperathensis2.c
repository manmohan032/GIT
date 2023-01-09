#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char cha;
    struct node * next;
};

struct node *point =NULL;//we are creating the pointer so we dont have to intialise it to perameters again and again.....in any function.

int ismatch(char ch)
{
    if(point->cha=='{'&&ch=='}')
    {
        //printf("here2\n");

        return 1;
    }
    
    if(point->cha=='['&&ch==']')
    {
        //printf("here3\n");
        return 1;
    }
    if(point->cha=='('&&ch==')')
    {
        //printf("here4\n");
       //printf("here1");
        return 1;
    }
    else
    {
        //printf("here5\n");
        return 0;
    }

}

void check(char *ch)//this will take the string as character array and check its parenthesis.
{
    int p=1;//intializing this vallue bs null could have 2 cases 
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='('||ch[i]=='['||ch[i]=='{')//this will manualy push in the parenthesis
        {
            struct node *list_new_element=(struct node *)malloc(2);
            list_new_element->cha=ch[i];
            list_new_element->next=point;
            point=list_new_element;
            //printf("%c\n",ch[i]);
        }
        else if(ch[i]==')'||ch[i]==']'||ch[i]=='}')
        {
            if(point==NULL)
            {
                p=0;//1st case when we have left with paranthes is but pointer is Null
                printf("invalid parenthesis in expression");
                break;
            }
            else if(ismatch(ch[i]))
            {
                point=point->next;//this will pop out the matching paranthesis.
            }
        }
    }
    if(point==NULL&&p)//case 2 if we dont have any parenthesis and the pointer is null.
    {
        printf("Valid number of paranthesis in expression \n");

    }
    else if (point!=NULL)//case 3  if the pointer is not null and we dont have any closing paranthesis.
    {
        printf("invalid parenthesis in expression");
    }
    point=NULL;//so to reuse this funtion check i am declaring point as null.as we dont want the older paranthesis in our new expresion.

}
int main()
{
    
    
        char * expresion ="{8*(3*5]}";
    check(expresion);
    return  0;
}