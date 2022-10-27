#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
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
    struct Node * new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void insertAfter(struct Node *prev_node,int new_data)
{
    if(prev_node==NULL)
    {
        printf("node cannot be inserted");
        return;
    }
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node ->data=new_data;
    new_node ->next=prev_node->next;
    prev_node->next=new_node;
}

void append(struct Node **head_ref,int new_data)
{
    struct Node* last=(*head_ref);
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->next=NULL;
    new_node->data=new_data;
    if((*head_ref)==NULL)
    {
        (*head_ref)=new_node;
        return;
    }
    //search for key to be deleted 
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
    return;
}


void Delete(struct Node **head_ref,int key)
{
    struct Node *temp=(*head_ref),*prev;
    if(temp==NULL)
    {
        printf("there are no nodes");
        return;
    }
    if(temp!=NULL&&temp->data==key)
    {
        (*head_ref)=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);

}
void swap(struct Node **head_ref,int x,int y) 
{
    if(x==y)
    {
        return;
    }  
    struct Node* prevX=NULL,currX=*head_ref;
    while(currX && currX->data!=x)
    {
        prevX=currX;
        currX=currX->next;
    }
    struct Node* prevY=NULL,currY=*head_ref;
    while(currY && currY->data!=y)
    {
        prevY=currY;
        currY=currY->next;
    }
    if(currX)
}
int main()
{
    
    struct Node *first=(struct Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct Node*)malloc(sizeof(struct Node));
    struct Node *third=(struct Node*)malloc(sizeof(struct Node));

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    printf("\nCreated Sigle linked list\n");
    printList(first);

    printf("\nAfter pushinig the 40\n");
    push(&first,40);
    printList(first);

    printf("\ninsert After second node 60 \n");
    insertAfter(second,60);
    printList(first);

    printf("\nAfter deleting the first node \n");
    Delete(&first,20);
    printList(first);

    printf("\nAfter appending the 70\n");
    append(&first,70);
    printList(first);
    return 0;
}






