#include<iostream>

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
void enq(node *p,int n)
{
   node *f = new node(n,p->next);
   p->next=f;
}
void dq(node *p)
{
    if(!isempty(p))
    {
        node *k=p->next;
        p->next=k->next;
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
    enq(current,23);
    enq(current,33);
    enq(current,43);
    
    printq(current);
    dq(current);
    //cout<<"23aa";
    printq(current);
    return 0;
}