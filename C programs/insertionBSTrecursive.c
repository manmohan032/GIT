#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* addele(int num)
{
    struct node *ele=(struct node*)malloc(sizeof(struct node));
    ele->data=num;
    ele->left=NULL;
    ele->right=NULL;
    return  ele;
}
int itr_search(struct node*root,int key)
{
    if(root!=NULL)
    {
        while(root!=NULL)
        {
            if(root->data==key)
            {
                return 1;
            }
            else if(root->data>key)
            {
                root=root->left;
            }
            else
            {
                root=root->right;
            }
        }
    }
    else
        return 0;
}
void insertBST(struct node*root,int key)
{
    static struct node* ele=NULL;
    if(root!=NULL)
    {
        ele=root;
        if(key==root->data)
        {
            printf("We can't add a duplicate element in BST");
            return;
        }
        else if(key<root->data)
        {
            insertBST(root->left,key);
        }
        else
        {
            insertBST(root->right,key);
        }
    }
    else
    {
        struct node *new=addele(key);
        printf("here");
        if(key>ele->data)
            ele->right=new;
        else
            ele->left=new;
        return;
    }
}
void inorder(struct node*root)
{
    if(root==NULL)
        return;
    else
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
}
int main()
{
    struct node*root=addele(5);
    struct node*p1=addele(3);
    struct node*p2=addele(7);
    struct node*c1=addele(1);
    struct node*c2=addele(4);
    struct node*c3=addele(6);

    root->left=p1;
    root->right=p2;
    p1->left=c1;
    p1->right=c2;
    p2->left=c3;
    insertBST(root,8);
    insertBST(root,9);
    insertBST(root,10);
    insertBST(root,11);
    inorder(root);
    printf("\n");
    if(itr_search(root,9))
    {
        printf("found in BST");
    }
    else
        printf("not found");
    return 0;
}