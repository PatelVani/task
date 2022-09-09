#include<stdio.h>
int recursivefun(int x)
{
	
	
	if(x>0)
	{
		printf("hi!!\n");
		recursivefun(x-1);
	}
}
int main()
{
	recursivefun(12);
	return 0;
}
