#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any two integer values:");
	scanf("%d %d",&a,&b);
	printf("a=%d \nb=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\na=%d \nb=%d",a,b);
	return 0;
}
