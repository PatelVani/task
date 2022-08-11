#include<stdio.h>
int main()
{
	int a,b;
	char sign;
	printf("enter any calculating sign you want:");
	scanf("%c",&sign);
	printf("enter any two number");
	scanf("%d %d",&a,&b);
	switch(sign)
	{
		case'+':printf("%d",a+b);
		break; 
		case'-':printf("%d",a-b);
		break;
		case'*':printf("%d",a*b);
		break;
		case'/':printf("%d",a/b);
		break;
		case'%':printf("%d",a%b);
		break;
	}
	return 0;
}
