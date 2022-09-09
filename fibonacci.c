#include<stdio.h>

int main()
{
	int x,i;
	printf("enter any value for x ");
	scanf("%d",&x);
	for( i=0;i<=x;i++)
	{
		printf("%d\n",fibfun(i));
			}
			return 0;
}
int fibfun(int x)
{
	if(x==0)
	{
		return 0;
	}
	if(x==1)
	{
		return 1;
	}
	return fibfun(x-1)+fibfun(x-2);
}
