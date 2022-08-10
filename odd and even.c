#include<stdio.h>
int main()
{
	int num;
	printf("enter any number you want to...");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		printf("\n%d is even",num);
	}
	else
	{
		printf("\n%d is odd",num);
	}
	return 0;
}
