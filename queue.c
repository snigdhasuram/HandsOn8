#include<stdio.h>
#include<stdlib.h>
#define size 10
void enqueue();
void dequeue();
void display();
int front=-1,rear=-1,item,choice,i;
int queue[size];
void main()
{
    while(1)
    {
        printf("\n *******MENU*******");
        printf("\n 1.enqueue");
        printf("\n 2.dequeue");
        printf("\n 3.display");
        printf("\n 4.exit");
        printf("\n enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
        }
    }
}
void enqueue()
{
    if(rear>=size-1)
    {
        printf("\n queue is full");
    }
    else
    {
        printf("enter item into queue:");
        scanf("%d",&item);
        rear++;
        queue[rear]=item;
        if(front==-1)
        {
            front++;
        }
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("\n queue is empty");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        item=queue[front];
        front++;
        printf("\n the deleted item from queue is %d",item);
    }
}
void display()
{
    if(front==-1)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n elements in queue:- ");
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}