#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node * left;
    int data;
    struct node* right;
    /* data */
};
struct node* addchild(int n)
{
    struct node *newchild= (struct node*)malloc(sizeof(struct node));
    newchild->data=n;
    newchild->left=NULL;
    newchild->right=NULL;
    return newchild;
}
int isBST(struct node*root)
{
    static struct node *prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL&&root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}
int isexist(struct node*root,int n)
{
    if(root!=NULL)
    {
        if(n<root->data)
            return isexist(root->left,n);
        if(n==root->data)
            return 1;
        if(n>root->data)
            return isexist(root->right,n);
    }
    else
    {
        return 0;
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
struct node* inorder_replace(struct node*root)
{
    if(root->left==NULL)
    {
        root=root->right;
        if(root->left!=NULL)
        {
            root=root->left;
        }
        return root;
    }
    root=root->left;
    if(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
struct node* deleteNode(struct node*root,int value)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        free(root);
        return NULL;
    }
    if(root->data>value)
    {    root->left=deleteNode(root->left,value);}
    else if(root->data<value)
    {   root->right= deleteNode(root->right,value);}
    else
    {
        struct node*pre=inorder_replace(root);
        root->data=pre->data;
        printf("%d\n",pre->data);
        if(pre->left==NULL)
            deleteNode(root->left,pre->data);
        else
            deleteNode(root->right,pre->data);
    }
    return NULL;
}
int main()
{
    struct node*root=addchild(7);
    struct node*p1=addchild(4);
    struct node*p2=addchild(9);
    struct node*c1=addchild(3);
    struct node*c2=addchild(5);
    struct node*c3=addchild(8);
    root->left=p1;
    root->right=p2;
    p1->left=c1;
    p1->right=c2;
    p2->left=c3;
    inorder(root);
    printf("\n");
    deleteNode(root,7);
    inorder(root);
    
    return 0;
}
