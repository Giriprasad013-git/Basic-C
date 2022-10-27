#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node *front;
struct node *rear;

void enQueue(struct node *ptr,int new_data)
{
    ptr->data=new-data;
    
}