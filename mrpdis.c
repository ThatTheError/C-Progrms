#include<stdio.h>
#include<conio.h>
int main()
{
	float mrp,bill;
	printf("enter thr mrp");
	scanf("%f",&mrp);
	if(mrp<=1000)
	{
		bill=mrp-(mrp*10/100);
	}
	else if(mrp>1000 && mrp<=3000)
	{
		bill=mrp-(mrp*15/100);
	}
	else if(mrp>3000 && mrp<=5000)
	{
		bill=mrp-(mrp*20/100);
	}
	else
	{
		bill=mrp-(mrp*35/100);
	}
	printf("after discount you have to paid = %f",bill);
	return 0;
}
