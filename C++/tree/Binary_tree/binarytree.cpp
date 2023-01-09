#include<iostream>
using namespace std;
class node
{
    public:
    node *left;
    int data;
    node *right;
    node()
    {
        left=NULL;
        right=NULL;
    }
    node(int n)
    {
        left=NULL;
        data=n;
        right=NULL;
    }

};

int main()
{
    node *root=new node(1);
    node *p1=new node(2);
    node *p2=new node(3);
    root->left=p1;
    root->right=p2;
    return 0;
}