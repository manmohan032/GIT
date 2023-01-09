#include<stdio.h>
#include<stdlib.h>
struct array{
    int size;
    int *arr;
    int f;
    int l;
};
int isempty(struct array * point)
{
    if(point->f==point->l)
    {
        return 1;
    }
    return 0;
}
int isfull(struct array * point)
{
    if(point->size-1==point->l)
    {
        return 1;
    }
    return 0;
}
void eq(struct array * pointer,int n)
{
    if(!isfull(pointer))
    {
        pointer->arr[pointer->l+1]=n;
        pointer->l++;
    }
    else
    {
        printf("qeuee is full");
    }
}
void dq(struct array * pointer)//if you want to return the value dequing from the qeuee so use int and return keyword here.
{
    if(!isempty(pointer))
    {
        pointer->f++;
    }
    else
    {
        printf("the qeuee is empty");
    }
}
void printq(struct array *q);

int main()
{
    struct array *p=(struct array*)malloc(sizeof(struct array*));
    p->size=100;
    p->arr=(int *)malloc(sizeof(int)*100);
    p->f=-1;
    p->l=-1;
    printf("%d\n",isempty(p));
    printf("%d\n",isfull(p));
    eq(p,34);
    eq(p,44);
    eq(p,44);
    eq(p,54);
    eq(p,64);
    printq(p);
    dq(p);
    dq(p);
    printq(p);
    return 0;
}
void printq(struct array *q)
{
    int i;
    for(i=q->f+1;i<q->l+1;i++)
    {
        printf("%d ",q->arr[i]);
    }  
    printf("\n");  
}