#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
    public:
    int data;
    node * next;
    node(int data1,node *p1)
    {
        data=data1;
        next=p1;
    }
    node(node *p)
    {
        next=p;
        data=0;
    }
    node(int n)
    {
        data=n;
        next=NULL;
    }
    node()
    {
        data=0;
        next=NULL;
    }
};

int isempty(node *p)
{
    if(p->next==NULL)
    {
        return 1;
    }
    return 0;
}
node * enq(node *p,int n)
{
   node *f = new node(n,NULL);
   
   p->next=f;
   return f;
}
void dq(node *p)
{
    if(!isempty(p))
    {
        node *k=p->next;
        p->next=k->next;
        delete k;
    }
    else
    {
        cout<<"Queue is empty\n";
    }
}
void printq(node *p)
{
    node *k=p;
    while(k->next!=NULL)
    {
        k=k->next;
        cout<<k->data<<" ";
    }
    cout<<endl;
}
int main()
{
    node *current=new node();
    node *f=current;
    current=enq(current,23);
    current=enq(current,33);
    current=enq(current,43);
    
    printq(f);
    dq(f);
    printq(f);
    current=enq(current,53);
    //cout<<"23aa";
    printq(f);
    return 0;
}