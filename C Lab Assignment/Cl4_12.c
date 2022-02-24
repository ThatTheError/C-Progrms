#include<stdio.h>
#include<math.h>
int main()
{
	int i=3,j,n,fact=1;
	double s=0.0,x;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the value of x");
	scanf("%lf",&x);
	while(i<=n)
	{
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		s=s+(pow(x,i)/(fact));
		fact=1;
		i+=2;
	}
	printf("\n%lf",x-s);
}
