#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void push();
void pop();
void display();
int choice,top=-1,stack[SIZE],item;
void main()
{
    while(1)
    {
        printf("\n *** MENU ***\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
        printf("\nenter your choice from menu:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            	break;
            case 2:pop();
            	break;
            case 3:display();
            	break;
            case 4: exit(0);
            default:printf("\nwrong choice");
        }
    }
}
void push()
{
	if(top==SIZE-1)
	{
		printf("\nstack overflow");
	}
	else
	{
		printf("\nenter value to insert: ");
		scanf("%d",&item);
		stack[++top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nstack underflow");
	}
	else
	{
		item=stack[top];
		printf("\nthe item removed is %d",item);
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nstack underflow");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}
	}
}
