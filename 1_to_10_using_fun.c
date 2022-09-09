#include<stdio.h>
int fun(int x)
{
   if(x<=10) 
   {
        printf("%d",x);
        printf("\n");
		fun(x+1);	
   }	
}

int main()
{
	fun(1);
	return 0;
}
