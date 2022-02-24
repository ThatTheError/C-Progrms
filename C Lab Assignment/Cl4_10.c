#include<stdio.h>
int main()
{
	int n,i=2;
	float s=0.0,z;
	printf("enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		s=(1.0/i)+s;
		i++;
	}
	printf("%f",1.0-s);
}
