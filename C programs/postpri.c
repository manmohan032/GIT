#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char cha;
    struct node* next;
};


int check(char ch)
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
    if(ch=='\0')
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void intopost(char *ch,struct node * point)
{
    int i=0,pv=0;

    char * newexp="";
    for(int j=ch[i];ch[j]!='\0';j++)
    {
        if(check(ch[j])>pv&&check(ch[j])>0)
        {
            printf("1");
            struct node *list_new_element=(struct node *)malloc(2);
            list_new_element->cha=ch[i];
            list_new_element->next=point;
            point=list_new_element;
            //printf("%c\n",ch[i]);
        }
        else if(check(ch[j])==0)
        {
            printf("2");
            newexp=newexp+ch[j]+'b';
        }
        else if(check(ch[j])<=check(point->cha)&&check(ch[j])>0)
        {
            printf("3");
            newexp=newexp+(point->cha);
        }
    }
    printf("%s",newexp);
}

int main()
{
    struct node *head=(struct node *)malloc(2);
    head->cha='\0';
    head->next=NULL;
    
 
    char * exp = "ab*cd/+";
    intopost(exp,head);
    return 0;

}