#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left,*right;
};

struct Node *newNode(int k)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=k;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void inOrder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    printf("%d->",root->data);
    inOrder(root->right);
}

struct Node* insert(struct Node *node,int data)
{
    if(node==NULL)
        return newNode(data);
    if(data<node->data)
        node->left=insert(node->left,data);
    else if(data>node->data)
        node->right=insert(node->right,data);
    
    return node;
}

struct Node* search(struct Node *root,int data)
{
    if(root==NULL || root->data==data)
    {
        return root;
    }
    if(root->data<data)
        return search(root->right,data);
    return search(root->left,data);
}

struct Node *minvalueNode(struct Node *node)
{
    struct Node *current=node;
    while(current&&current->left!=NULL)
    {
        current=current->left;
    }
    return current;
}
struct Node *deletenode(struct Node *root,int data)
{
    if(root==0)
    {
        return root;
    }
    if(data<root->data)
    {
        root->left=deletenode(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=deletenode(root->right,data);
    }
    else
    {
        if(root->left==NULL)
        {
            struct Node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct Node *temp=root->left;
            free(root);
            return temp;
        }
        struct Node *temp=minvalueNode(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp-data);
    }
    return root;
}

int main()
{
    struct Node* root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,70);
    insert(root,40);
    insert(root,60);
    insert(root,80);
    printf("\nThe inorder traversal is : \n");
    inOrder(root);

    printf("\nSearch : ");
    search(root,20);
    return 0;
}