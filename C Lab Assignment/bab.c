#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a no");
	scanf("%d",&n);
	if(n==2)
	{
		printf("prime");
		return 0;
	}
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		printf("commposite");
		else
		printf("prime");
		break;
	}
	return 0;
}
