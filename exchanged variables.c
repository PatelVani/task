#include<stdio.h>
int main()
{
	float a,b;
	printf("enter number a=:");
	scanf("%f",&a);
	printf("enter number b=:");
	scanf("%f",&b);
	a=a*b;
	a=a/b;
	b=a/b;
	printf("exchanged value of the variable is:\n A=%f \n B=%f",a,b);
	return 0;
}
