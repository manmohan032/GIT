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
    printq(p);
    eq(p,14);
    printq(p);
    eq(p, 54);
    printq(p);
    eq(p,24);
    printq(p);
    eq(p,34);
    //eq(p,54);
    printq(p);
    eq(p,44);
    //eq(p,64);
    printq(p);
    dq(p);
    printq(p);
    //printf("%d\n",dq(p));
    eq(p,44);
    //printf("%d",p->arr[3]);    
    printq(p);
    return 0;
}

int isfull(struct array *p)
{
    int f=p->f;
    int s=p->size;
    int l=p->l;
    if((l+1)%s==f)
    {
        return 1;
    }
    
    return 0;
}

int isempty(struct array *p)
{
    int f=p->f;
    int s=p->size;
    int l=p->l;
    if(f==l)
    {
        return 1;
    }
    
    return 0;
    
}

void printq(struct array *q)
{

    int f=(q->f)%q->size;
    int i=1;
    printf("%d %d\n",f,q->l%q->size);
    while((q->l)%q->size!=f%q->size) 
    {
        f=q->f+i;
        printf("%d ",q->arr[i]);
        i++;
    }  
    printf("23\n");
}


void eq1(struct array *q, int val){
    if(isfull(q)){
        printf("This Queue is full");
    }
    else{
        q->l = (q->l +1)%q->size;
        q->arr[q->l] = val; 
        printf("Enqued element: %d\n", val);
    }
}
void eq(struct array *q,int n)
{
    if(isfull(q))
    {
        printf("Qeuee is full\n");
    }
    else
    {
        q->l++;
        q->arr[q->l%q->size]=n;
        printf("Enqued element: %d\n", n);
    }
}
void dq(struct array * pointer)//if you want to return the value dequing from the qeuee so use int and return keyword here.
{
    int a=-1;
    if(isempty(pointer))
    {
        printf("the qeuee is empty\n");
    }
    else
    {
        pointer->f =(pointer->f +1)%pointer->size;
        a=pointer->arr[pointer->f];
        printf("the element dq is %d\n" ,a);
    }
}