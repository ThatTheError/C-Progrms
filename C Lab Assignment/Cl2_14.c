#include<stdio.h>
int main()
{
	int yr;
	printf("enter the year to check :");
	scanf("%d",&yr);
	if((yr%100==0 && yr%400==0) || (yr%100!=0 && yr%4==0))
	printf("the entered year is a leap year");
	else
	printf("the entered year is not a leap year");
	return 0;
}
