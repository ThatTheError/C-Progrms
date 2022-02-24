#include<stdio.h>
#include<math.h>
//c=
#define c 310000000
int main()
{
	float rm,v,em;
	printf("enter restmass and velocity..");
	scanf("%f%f",&rm,&v);
	//em=rm/sqrt((1.0-(pow(v,2))/(pow(310000000,2)));
	em=rm/sqrt((1.0-(v*v))/(c*c));
	printf("effective relativestic mass = %f",em);
	return 0;
}
