#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void printList(struct Node *n)
{
    while(n!=NULL)
    {
        printf("%d->",n->data);
        n=n->next;
    }
}

void push(struct Node **head_ref,int new_data)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->prev=NULL;
    new_node->next=(*head_ref);
    if((*head_ref)!=NULL)
    {
        (*head_ref)->prev=new_node;
    }
    (*head_ref)=new_node;
}

void insertAfter(struct Node *prev_node,int new_data)
{
    if(prev_node==NULL)
    {
        printf("\nThe prev node is not present\n");
        return;
    }
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
    new_node->prev=prev_node;
    new_node->next->prev=new_node;
}

void insertEnd(struct Node **head_ref,int new_data)
{
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    struct Node *temp=(*head_ref);
    new_node->next=NULL;
    if((*head_ref)==NULL)
    {

        new_node=(*head_ref);
        new_node->prev=NULL;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
        new_node->prev=temp;
}
int main()
{

    struct Node *first=(struct Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct Node*)malloc(sizeof(struct Node));
    struct Node *third=(struct Node*)malloc(sizeof(struct Node));

    first->data=10;
    first->next=second;
    first->prev=NULL;

    second->data=20;
    second->next=third;
    second->prev=first;

    third->data=30;
    third->next=NULL;
    third->prev=second;
    

    printf("\nCreated Nodes are created\n");
    printList(first);

    printf("\nPusshing the 40 \n");
    push(&first,40);
    printList(first);

    printf("\nInserting After the given node\n");
    insertAfter(first,60);
    printList(first);

    printf("\nAfter inserting 50 at the end\n");
    insertEnd(&first,50);
    printList(first);
    return 0;
}

