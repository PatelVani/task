#include<stdio.h>
int main()
{
	int a,b;
	printf("Please enter your current age:\n");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("you are eligible for voting process");
	}
	else
	{
		printf("you are not eligible for voting process");
	}
	return 0;
}
