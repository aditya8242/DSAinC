// implementation of static stack with basic functions

#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int stack[MAX];
int top = -1;

int isFull()
{
	if(top == (MAX - 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isEmpty()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push()
{
    int ele;
    if(isFull())
    {
        printf("Stack is full.\n");
    }
    else
    {
        printf("Enter element to push: ");
        scanf("%d", &ele);
        top++;
        stack[top] = ele;
    }
}

int pop()
{
	int ele;
	if(isEmpty())
	{
		printf("Stack is empty.\n");
	}
	ele = stack[top];
	top--;
	return ele;
}

void peek()
{
	if(isEmpty())
	{
		printf("Stack is empty.\n\n");
	}
	
	printf("Item at top is: %d\n", stack[top]);
}

void display()
{
	int i;
	
	if(isEmpty())
	{
		printf("Stack is empty.\n");
	}
	else
	{
		printf("\tStack elements:\n");
		for(i = top; i >= 0; i--)
		{
			printf("\t%d\n", stack[i]);
		}	
	}
}

int main()
{
    int ch;
    printf("\n");
    while(1)
    {
        printf("\tOPTIONS\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
		    case 1:
		        push();
		        break;
		    
		    case 2:
		        if(isEmpty())
		        {
		        	printf("Stack is empty.\n");
		        }
		        else
		        {
		        	printf("Deleted %d\n", pop());
		        }
		        break;
		    
		    case 3:
		        peek();
		        break;
		    
		    case 4:
		        display();
		        break;
		    
		    case 5:
		        printf("Exiting.\n");
		        exit(1);
		    
		    default:
		    	printf("Invalid choice.\n");
		        break;
        }
    }
    
}
