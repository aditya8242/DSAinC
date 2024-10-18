//implementation of static queue with some basic functions
#include<stdio.h>

#define MAX 20
int Q[MAX];
int F, R;

void init()
{
	F = R = 0;
	printf("Queue initialized.\n");
}

void enqueue()
{
	int no;
	
	if(R == (MAX-1))
	{
		printf("Queue is full.\n");
	}
	else
	{
		printf("Enter the element: ");
		scanf("%d", &no);
		
		Q[R] = no;
		R++;
		printf("Element added.\n");
	}
}

void dequeue()
{
	if(F==R)
	{
		printf("Queue is empty.\n");
	}
	else
	{
		printf("Deleted element: %d\n", Q[F]);
		F++;
	}
}

void isEmpty()
{
	if(F==R)
	{
		printf("Queue is empty.\n");
	}	
}

void isFull()
{
	if(R == (MAX-1))
	{
		printf("Queue is full.\n");
	}
}

void display()
{
	int i;
	if(F==R)
	{
		printf("Queue is empty.\n");
	}
	else
	{
		printf("Elements in Queue:\n");
		for(i = 0; i < R; i++) //for reverse i = R; i > 0; i--
		{
			printf("%d ", Q[i]);
		}
	}
	printf("\n");
}

int main()
{
	int ch;
	
	do
	{
		printf("Options:\n");
		printf("1.Initialize\n");
		printf("2.Enqueue\n");
		printf("3.Dequeue\n");
		printf("4.Display\n");
		printf("5.Exit\n");
		
		printf("Enter your choice\n");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1: init();
					break;
			case 2: enqueue();
					break;
			case 3: dequeue();
					break;
			case 4: display();
					break;
			case 5: printf("Exiting.\n");
					break;
			default: printf("Invalid choice, enter correct choice\n.");
		}
	}while(ch!=5);
}


