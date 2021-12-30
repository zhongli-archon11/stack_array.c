#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1;
int stack1[MAX];

push()
{
	int pushed_item;
	if(top==MAX-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter the item to be pushed in stack: ");
		scanf("%d",&pushed_item);
		top=top+1;
		stack1[top]=pushed_item;
	}
	printf("\n");
}

pop()
{
	if(top==-1)
		printf("Stack Underflow");
	else
	{
		printf("Popped element is %d", stack1[top]);
		top=top-1;
	}
	printf("\n");
}

display()
{
	int i;
	if (top==-1)
		printf("Stack is empty");
	else
	{
		printf("Stack elements:\n");
		for(i=top;i>=0;i--)
			printf("%d ",stack1[i]);
	}
	printf("\n");
}

main()
{
	int choice;
	while(1)
	{
		printf("\tMENU\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Quit\n");
		printf("Your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Invalid choice");
		}
	}
}
