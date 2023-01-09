#include<iostream>
using namespace std;

class array
{
    public:
    int size;
    int f=-1,l=-1;
    int *arr;
};
int isempty(array *p)
{   
    if(p->f==p->l)
    {
        return 1;
    }
    return 0;
}
int isfronthavespace(array *p)
{
    if(p->f>=0&&p->f<p->size-1)
    {
        return 1;
    }
    return 0;
}
int isfull(array *p)
{
    if(p->l==p->size-1)
    {
        return 1;
    }
    return 0;
}
void  eqatfront(array *p,int n)
{
    if(isfronthavespace(p))
    {
        p->arr[p->f]=n;
        p->f--;
    }
    else
    {
        cout<<"front don't have space\n";
    }
}

void  eqatend(array *p,int n)
{
    if(!isfull(p))
    {
        p->l++;
        p->arr[p->l]=n;
    }
    else
    {
        cout<<"end don't have space\n";
    }
}
void dqfrmend(array *p)
{
    if(!isempty(p))
    {
        p->l--;
    }
    else
    {
        cout<<"queue is empty";
    }
}
void dqfrmfrnt(array *p)
{
    if(!isempty(p))
    {
        p->f++;
    }
    else
    {
        cout<<"queue is empty";
    }
}
void printq(array *p)
{
    int n=p->f+1;
    while(n<=p->l)
    {
        cout<<p->arr[n]<<" ";
        n++;
    }
}
int main()
{
    array *point=new array();
    point->size=5;
    point->arr=new int[5];
    eqatend(point,23);
    eqatend(point,33);
    eqatend(point,43);
    eqatend(point,53);
    eqatend(point,63);
    printq(point);   
    //dqfrmfrnt(point);
    dqfrmend(point);
    eqatfront(point,83);
    eqatend(point,83);
    printq(point);   
    return 0;
}