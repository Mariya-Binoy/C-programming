#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=0,a,b,c,r,s=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	a=n;
	c=n;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("%d",count);
	while(a>0)
	{
		b=a%10;
		s=s+(pow(b,count));
		a=a/10;
	}
	if(s==c)
		printf("The number is amstrung number");
	else
		printf("The number is not amstrung");
}
