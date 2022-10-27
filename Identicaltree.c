//Detarmine tho trees are identical or not if identical print yes else print No

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void isIdentical(int data1,int data2,int l1,int r1,int l2,int r2)
{
    struct Node* n1=(struct Node*)malloc(sizeof(struct Node));
    struct Node* n2=(struct Node*)malloc(sizeof(struct Node));
    n1->data=data1;
    n2->data=data2;
    n1->left=l1;
    n1->right=r1;
    n2->left=l2;
    n2->right=r2;
    if(n1->data==n2->data && n1->left==n2->left && n1->right==n2->right)
    {
        printf("\nyes");
    }
    else
    {
        printf("\nNo");
    }
}
int main()
{
    isIdentical(30,30,10,20,10,20);
}