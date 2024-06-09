#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack[20];
void choice();
int size=5;
void push();
void pop();
void display();
void choice()
{
	int ch;
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
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
		default:
			printf("Invalid input: \n");
			choice();
	}
}
void push()
{
	int item;
	if(top>=size)
	{
		printf("The stack is full.Cannot push\n");
		choice();
	}
	else
	{
		printf("Enter the element to be pushed:");
		scanf("%d",&item);
		top++;
		stack[top]=item;
		printf("Element pushed to stack successfully");
	}
	choice();
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("The stack is empty.Cannot pop");
	}
	else
	{
		item=stack[top];
		top--;
		printf("%d is deleted from the stack",item);
	}
	choice();
}
void display()
{
	if(top==-1)
		printf("stack is empty");
	else
	{
		int i;
		for(i=0;i<=top;i++)
		printf("%d\t",stack[i]);
	}
	choice();
}
int main()
{
	int i;
	printf("MAIN MENU\n");
	printf("1.STACK PUSH\n2.STACK POP\n3.DISPLAY");
	choice();
}
