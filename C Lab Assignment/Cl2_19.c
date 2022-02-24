#include<stdio.h>
int main()
{
	int a,m,y,jd,day,month,year;
	printf("enter day");
	scanf("%d",&day);
	printf("enter month");
	scanf("%d",&month);
	printf("enter year");
	scanf("%d",&year);
	a=(14-month)/12;
	y=year+4800-a;
	m=month+12*a-3;
	jd=day+(153*m+2)/5+(365*y)+(y/4)-(y/100)+(y/400)-32045;
	printf("julian day of the entered date is %d",jd);
	return 0;
}
