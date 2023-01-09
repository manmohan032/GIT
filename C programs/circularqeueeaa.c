#include<stdio.h>
#include<stdlib.h>
struct array{
    int size;
    int *arr;
    int f;
    int l;
};
int isempty(struct array * point);

int isposible(struct array *p);

void eq(struct array * pointer,int n);

void dq(struct array * pointer);

void printq(struct array *q);

int main()
{
    struct array *p=(struct array*)malloc(sizeof(struct array*));
    p->size=5;
    p->arr=(int *)malloc(p->size);
    p->f=0;
    p->l=0;
    //printf("%d\n",isempty(p));
    //printf("%d\n",isfull(p));
    eq(p,14);
    eq(p,24);
    eq(p,34);
    eq(p,44);
    eq(p,44);
    //eq(p,54);
    //eq(p,64);
    printq(p);
    dq(p);
    dq(p);
    printq(p);
    return 0;
}

int isposible(struct array *p)
{
    int f=p->f;
    int s=p->size;
    int l=p->l;
    if(f!=(l+1)%s)
    {
        return 1;
    }
    printf("qeuee is full\n");
    return 0;
}
int isempty(struct array *p)
{
    int f=p->f;
    int s=p->size;
    int l=p->l;
    if((f)%s==(l%s))
    {
        return 1;
    }
    
    return 0;
    
}

void printq(struct array *q)
{
    int f=q->f;
    int s=q->size+1;
    int l=q->l;
    int i;
    for(i=f;i<l;i++)
    {
        printf("%d ",q->arr[i]);
    }  
    printf("\n");  
}
void eq(struct array * pointer,int n)
{
    
    if(isposible(pointer))
    {
        pointer->arr[pointer->l]=n;
        pointer->l=(pointer->l+1)%pointer->size;
    }
}
void dq(struct array * pointer)//if you want to return the value dequing from the qeuee so use int and return keyword here.
{
    if(!isempty(pointer))
    {
        pointer->f=(pointer->f+1)%pointer->size;
    }
    else
    {
        printf("the qeuee is empty\n");
    }
}
