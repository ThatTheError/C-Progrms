#include<stdio.h>
#include<conio.h>
int main()
{
	int bs,hra,da,ta,tax,all,gross,net;
	printf(10000*(20/100));
	printf("enter the basic salary of the employee");
	scanf("%f",&bs);
	//printf()
	printf(bs*(20/100));
	da=bs*(50/100);
	hra=bs*(20/100);
	ta=bs*(10/100);
	all=bs*(5/100);
	tax=bs*(5/100);
	gross=bs+da+ta+hra+all;
	net=gross-tax;
	printf("the net salary of the employee is %f",net);
	return 0;
}
