#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
    int height;
    /* data */
};
int getheight(struct node*root)
{
    if(root==NULL)
        return 0;

    return root->height;
}
struct node* createNode(int data)
{
    struct node*leaf=(struct node*)malloc(sizeof(struct node));
    leaf->data=data;
    leaf->left=NULL;
    leaf->right=NULL;
    leaf->height=1;
    return leaf;
}
int max(int a,int b)
{
    return  (a>b)?a:b;
}
struct node*rightrotate(struct node*y)
{
    struct node *x=y->left;
    struct node *t2=x->right;

    x->right=y;
    y->left=t2;

    x->height=max(getheight(x->left),getheight(x->right))+1;
    y->height=max(getheight(y->left),getheight(y->right))+1;
    return x;
}
struct node*leftrotate(struct node*x)
{
    struct node *y=x->right;
    struct node *t2=y->left;

    x->right=t2;
    y->left=x;

    y->height=max(getheight(y->left),getheight(y->right))+1;
    x->height=max(getheight(x->left),getheight(x->right))+1;
    return y;
}
int getbalanceFactor(struct node*root)
{
    if(root==NULL)
        return 0;
    return getheight(root->left)-getheight(root->right);
}
struct node *insert(struct node* node, int data){
    if (node == NULL)
        return  createNode(data);
 
    if (data < node->data)
        node->left  = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
 
    node->height = 1 + max(getheight(node->left), getheight(node->right));
    int bf = getbalanceFactor(node);
 
    // Left Left Case
        if(bf>1 && data < node->left->data){
            return rightrotate(node);
        }
    // Right Right Case
        if(bf<-1 && data > node->right->data){
            return leftrotate(node);
        }
    // Left Right Case
    if(bf>1 && data > node->left->data){
            node->left = leftrotate(node->left);
            return rightrotate(node);
        }
    // Right Left Case
    if(bf<-1 && data < node->right->data){
            node->right = rightrotate(node->right);
            return leftrotate(node);
        }
    return node;
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
int main()
{
    struct node*root=NULL;
    root=insert(root,7);
    root=insert(root,3);
    root=insert(root,52);
    root=insert(root,21);
    root=insert(root,21);
    root=insert(root,6);
    root=insert(root,9);
    root=insert(root,8);
    inorder(root);
    printf("\n%d\n",getheight(root));
    return 0;
}