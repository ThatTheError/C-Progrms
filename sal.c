#include<stdio.h>
#include<conio.h>
int main()
{
	float net,gross,pa,da,hra,tax,sal;
	printf("enter the salary of the employee");
	scanf("%f",&sal);
	pa=sal*20/100;
	da=sal*30/100;
	hra=sal*10/100;
	net=pa+da+hra;
	tax=sal*5/100;
	gross=net-tax;
	printf("gross salary is %f",gross);
	return 0;
}