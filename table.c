#include<stdio.h>
int main()
{
	int table,n;
	printf("enter any number:");
	scanf("\n%d",&n);
	printf("\nMultiplication table of %d is :",n);
	for(table=1;table<=10;table++)
	{
		printf("\n %d X %d = %d",n,table,table*n);
	}
	return 0;
}
