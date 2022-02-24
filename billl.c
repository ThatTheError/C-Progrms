#include<stdio.h>
#include<conio.h>
int main()
{
	float units,amt;
	printf("enter your units");
	scanf("%f",&units);
	if(units<=50)
	{
		amt=units*2.50;
	}
	else if(units>50 && units <=200)
	{
		amt=(((units-50)*4.30) + (50*2.50));
	}
	else
	{
		amt=((50*2.50) + (150*4.30) + ((units-200)*5.30)); 
	}
	printf("the amount to be paid is %f",amt);
	return 0;
}
