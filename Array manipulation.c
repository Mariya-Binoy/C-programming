#include<stdio.h>
#include<conio.h>
int display();
int mainmenu();
int deletemenu();
int insertmenu();
int a[10],n,i;
int main()
{
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	display();
	mainmenu();
	
}

int display()
{
	printf("The current array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int insertmenu()
{
	int pi,new;
	printf("Enter the element to be inserted:\n");
	scanf("%d",&new);
	printf("Enter the position to be inserted:\n");
	scanf("%d",&pi);
	i=n;
	while(i>=pi)
	{
		a[i]=a[i-1];
		i--;	
	}
	a[i]=new;
	n++;
	display();
	mainmenu();
}
int deletemenu()
{
	int pd;
	printf("Enter the position of the element to be deleted:\n");
	scanf("%d",&pd);
	i=pd-1;
	while(i<n-1)
	{
		a[i]=a[i+1];
		i++;
	}
	n--;
	display();
	mainmenu();
}
int mainmenu()
{
	int mch;
	printf("\nMAIN MENU\n");
	printf("Enter 1 to insert\nEnter 2 to delete \nEnter 3 to exit");
	scanf("%d",&mch);
	switch(mch)
	{
		case 1:
			insertmenu();
			break;
		case 2:
			deletemenu();
			break;
		case 3:
			break;
		default:
			{
				printf("Invalid input.Please enter a valid input");
				mainmenu();
			}
	}
}














