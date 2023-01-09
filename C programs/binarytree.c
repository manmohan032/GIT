#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnew(int data)
{
    struct node *p =(struct node*)malloc(3);
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
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
int main()
{
    struct node *root=createnew(7);
    struct node *p1=createnew(1);
    struct node *p2=createnew(2);
    struct node *c1=createnew(3);
    struct node *c2=createnew(4);
    struct node *c3=createnew(5);
    struct node *c4=createnew(6);

    root->left=p1;
    root->right=p2;
    p1->left=c1;
    p1->right=c2;
    p2->left=c3;
    p2->right=c4;

    //preorder(root);
    postorder(root);
    //inorder(root);
    return 0;
}