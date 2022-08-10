#include<stdio.h>
int main()
{
	int value;
	printf("enter any value:");
	scanf("%d",&value);
	if(value>0)
	{
	    printf("%d is +ve number",value);
	}
	else if(value==0)
	{
		printf("%d is neither +ve nor -ve",value);
	}
	else
	{
		printf("%d is -ve number",value);
	}
	return 0;
}
