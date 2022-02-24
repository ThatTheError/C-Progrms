#include<stdio.h>
#define pi 3.14
int main()
{
	float r,area,vol;
	printf("enter the radious");
	scanf("%f",&r);
	area=4*pi*r*r;
	printf("\narea of the sphere:%f",area);
	vol=area*r/3;
	printf("\nvolume of the sphere:%f",vol);
	return 0;
}
