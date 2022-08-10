#include<stdio.h>
int main()
{
	int math,chem,phy;
	float percentage,total;
	printf("enter your score out of 100 for MATHS ,CHEM,PHY respectively:");
	scanf("%d%d%d",&math,&chem,&phy);
	printf("MATHEMATICS=%d\nCHEMISTRY=%d\nPHYSICS=%d",math,chem,phy);
	total=math+chem+phy;
	printf("\nTOTAL MARKS=%f",total);
	percentage=total/300*100;
	printf("\nPERCENTAGE=%f",percentage);
	if(percentage>90)
	{
		printf("\ngrade:A");
	}
	 else if(percentage>75)
	{
		printf("\ngrade:B");
	}
	 else if(percentage>60)
	{
		printf("\ngrade:C");
	}
	else
	{
		printf("\ngrade:D");
	}
	return 0;
	
}
