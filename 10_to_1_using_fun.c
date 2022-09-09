#include<stdio.h>
int fun(int x)
{
   if(x>=1) 
   {
        printf("%d",x);
        printf("\n");
		fun(x-1);	
   }	
}

int main()
{
	fun(10);
	return 0;
}
