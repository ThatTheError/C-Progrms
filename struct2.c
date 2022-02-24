#include<stdio.h>
struct time
{
	int h,m;
};
int main()
{
	struct time t1,t2;
	int hour,min;
	printf("enter the 1st time in hour and minutes..");
	scanf("%d%d",&t1.h,&t1.m);
	printf("enter the 2nd time in hour and minutes..");
	scanf("%d%d",&t2.h,&t2.m);
	if(t1.m>t2.m)
	{
		t2.h--;
		min=60-t1.m+t2.m;
		hour=t2.h-t1.h;
	}
	else
	{
		min=t2.m-t1.m;
		hour=t2.h-t1.h;
	}
	printf("difference between two times is %d hours and %d minutes",hour,min);
	return 0;
}
