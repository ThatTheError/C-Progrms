#include<stdio.h>
#include<stdlib.h>
int main()
{
	float np,pa,final_amount,lp;
	printf("enter number of product you bought..");
	scanf("%g",&np);
	if(np<3)
	{
		printf(" sorry no offer available because you bought less than three product..");
		exit(0);
	}
	printf("enter your purchase amount..");
	scanf("%g",&pa);
	if(pa>100000)
	{
		final_amount=pa-(pa*15/100);
		goto gopal;
	}
	if(pa>0 && pa<1000)
	{
		printf("enter the price of your product which has least MRP i.e meancost product...");
		scanf("%g",&lp);
		final_amount=pa-((pa-lp)*5/100+lp*7/100);
	}
	else if(pa>1000 && pa<=10000)
	{
		printf("enter the price of your product which has least MRP i.e meancost product...");
		scanf("%g",&lp);
		final_amount=pa-((pa-lp)*7/100+lp*9/100);
	}
	else if(pa>10000 && pa<=100000)
	{
		printf("enter the price of your product which has least MRP i.e meancost product...");
		scanf("%g",&lp);
		final_amount=pa-((pa-lp)*9/100+lp*11/100);
	}
	gopal:
	printf("\nAfter discount the amount to be paid is %g",final_amount);
	return 0;
}
