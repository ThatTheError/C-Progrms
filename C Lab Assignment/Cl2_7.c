#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,n,ci;
	printf("enter principle amount,interest rate,time period and compounding per year respectively..");
	scanf("%f%f%f%f",&p,&r,&t,&n);
	ci=p*pow((1+(r/n)),n*t);
	printf("compound interest is =%f",ci);
	return 0;
}
