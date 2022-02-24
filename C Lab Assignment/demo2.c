#include<stdio.h>
void display(int);
int main()
{
	int bs;
	printf("enter the basic salary of the employee..");
	scanf("%d",&bs);
	display(bs);
	return 0;
}
void display(int x)
{
	int ta,da,hra,gross;
	ta=10*x/100;
	da=20*x/100;
	hra=40*x/100;
	gross=x+ta+da+hra;
	printf("gross salary of the employee is %d",gross);
}
