#include<iostream>
using namespace std;

class tree
{
    public:
    char data;
    tree *left,*right;
    tree()
    {
        data=0;
        left=NULL;
        right=NULL;
    }
    tree(char d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
tree *createNode(char data,tree *root)
{
    if(root==NULL)
    {
        tree *ob= new tree(data);
        return ob;
    }
    else if(root->data>data)
    {
        root->left=createNode(data,root->left);
    }
    else
    {
        root->right=createNode(data,root->right);
    }
    return root;
}

void inorder(tree *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    tree *root=NULL;
    root=createNode(9,root);
    root=createNode(7,root);
    root=createNode(6,root);
    root=createNode(5,root);
    root=createNode(10,root);
    root=createNode(11,root);
    inorder(root);
    return 0;
}