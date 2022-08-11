#include<stdio.h>
int main()
{
	int a,b;//a=3,b=2
	printf("enter any two integer values:");
	scanf("%d %d",&a,&b);
	printf("a=%d \nb=%d",a,b);
	a=a+b;//a=2+3=5
	b=a-b;//a=5-3=2
	a=a-b;//b=
	printf("\na=%d \nb=%d",a,b);
	return 0;
}
