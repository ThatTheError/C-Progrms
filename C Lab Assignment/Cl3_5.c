#include<stdio.h>
int main()
{
	int hour=00,min=00,secs,sec;
	printf("enter the seconds");
	scanf("%d",&sec);
	secs=sec;
	hour=sec/3600;
	sec=sec-(3600*hour);
	min=sec/60;
	sec=sec-(60*min);
	printf("%d seconds = %d hour\t:%d min \t:%d sec\t",secs,hour,min,sec);
	return 0;
}
