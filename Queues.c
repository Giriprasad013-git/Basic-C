#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct queue
{
    int front;
    int rear;
    int size;
    int capacity;
    int *arr;
};

struct queue *initialize(int c)
{
    struct queue *temp=(struct queue*)malloc(sizeof(struct queue));
    temp->front=0;
    temp->capacity=c;
    temp->rear=temp->capacity-1;
    temp->size=0;
    temp->arr=(int *)malloc(temp->capacity*sizeof(int));
}

void enQueue(struct queue *q,int data)
{
    if(q->size==q->capacity)
    {
        printf("\nThe Queue is full\n");
        return;
    }
    q->rear=(q->rear+1)%(q->capacity);
    q->arr[q->rear]=data;
    q->size=q->size+1;
}

int deQueue(struct queue *q)
{
    int data;
    if(q->size==0)
    {
        printf("\nThe Queue is empty\n");
        return INT_MIN;
    }
    data=q->arr[q->front];
    q->front=(q->front+1)%q->capacity;
}

int getFront(struct queue *q)
{
    return q->arr[q->front];
}

int getRear(struct queue *q)
{
    return q->arr[q->rear];
}

int main()
{
    struct queue *queue=initialize(5);
    enQueue(queue,10);
    enQueue(queue,20);
    enQueue(queue,30);

    printf("\nThe front of the Queue is: %d\n The Rear of the Queue is: %d\n",getFront(queue),getRear(queue));
    printf("\nThe Dequeued element is: %d\n",getFront(queue));
    deQueue(queue);
    printf("\nAfter Dequeue\nThe front of the Queue is: %d\nThe Rear of the Queue is: %d\n",getFront(queue),getRear(queue));

}