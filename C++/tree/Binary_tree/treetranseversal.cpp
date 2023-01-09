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
void preorder(node *root)
{
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    node *root=new node(9);
    node *p1=new node(2);
    node *p2=new node(3);
    node *p3=new node(4);
    node *p4=new node(5);
    node *p5=new node(6);
    
    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    preorder(root);
    return 0;
}