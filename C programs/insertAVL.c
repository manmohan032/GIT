#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*right;
    struct node*left;
    int height;
};
int max(int a,int b)
{
    return (a>b)?a:b;
}
int getheight(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return root->height;
}
struct node* rightrotate(struct node*y)
{
    struct node*x=y->left;
    struct node*t2=x->right;

    x->right=y;
    y->left=t2;

    x->height=max(getheight(x->right),getheight(x->left))+1;
    y->height=max(getheight(y->right),getheight(y->left))+1;
    
    return x;
}
struct node* leftrotate(struct node*x)
{
    struct node*y=x->right;
    struct node*t2=y->left;

    y->left=x;
    x->right=t2;

    x->height=max(getheight(x->right),getheight(x->left))+1;
    y->height=max(getheight(y->right),getheight(y->left))+1;

    return y;
}
void inorder(struct node*root)
{
    
    if(root==NULL)
        return;
    else
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
}
struct node*createNode(int data)
{
    struct node*leaf=(struct node*)malloc(sizeof(struct node));
    leaf->data=data;
    leaf->height=1;
    leaf->left=NULL;
    leaf->right=NULL;
    return leaf;
}
int getBalanceFactor(struct node*root)
{
    if(root==NULL)
        return 0;
    return getheight(root->left)-getheight(root->right);
}
struct node*insert(struct node*root,int data)
{
    if(root==NULL)
    {
        return createNode(data);
    }
    else if(root->data>data)
    {
        root->left=insert(root->left,data);
    }
    else if(root->data<data)
    {
        root->right = insert(root->right,data);
    }

    //to check if its a avl tree,if not to make it one.
    
    int bf=getBalanceFactor(root);
    root->height=1+max(getheight(root->left),getheight(root->right));
    if(bf>1&&root->left->data>data)
    {
        return rightrotate(root);
    }
    else if(bf<-1&&root->right->data<data)
    {
        return leftrotate(root);
    }
    else if(bf>1&&root->left->data<data)
    {
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    else if(bf<-1&&root->right->data>data)
    {
        root->right=rightrotate(root->right);
        return leftrotate(root);
    }
    return root;
}
int main()
{
    struct node*root=NULL;
    root=insert(root,7);
    root=insert(root,5);
    root=insert(root,9);
    root=insert(root,17);
    root=insert(root,3);
    root=insert(root,2);
    root=insert(root,24);
    root=insert(root,21);
    root=insert(root,8);

    inorder(root);
    printf("\n%d\n",root->height);
    return 0;
}