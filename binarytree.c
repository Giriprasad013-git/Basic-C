#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int k)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=k;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void inOrder(struct Node *n )
{
    if(n==NULL)
    {
        return;
    }
    inOrder(n->left);
    printf("%d\t",n->data);
    inOrder(n->right);
}

void preOrder(struct Node *n)
{
    if(n==NULL)
    {
        return;
    }
    printf("%d\t",n->data);
    preOrder(n->left);
    preOrder(n->right);
}

void postOrder(struct Node *n)
{
    if(n==NULL)
    {
        return;
    }
    postOrder(n->left);
    postOrder(n->right);
    printf("%d\t",n->data);
}

int main()
{
    struct Node *root=newNode(10);
    root->left=newNode(20);
    root->right=newNode(30);
    root->left->left=newNode(40);
    root->left->right=newNode(50);
    root->right->left=newNode(60);
    root->right->right=newNode(70);

    printf("\nThe incorder traversal is : \n");
    inOrder(root);
    printf("\nThe preOrder traversal is : \n");
    preOrder(root);
    printf("\nThe postOrder traversal id : \n");
    postOrder(root);
    return 0;
}

