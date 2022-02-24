#include<stdio.h>
int main()
{
	int n,a[10],r,i=0,j;
	printf("enter a number");
	scanf("%d",&n);
	while(n>=16)
	{
		r=n%16;
		a[i]=r;
		n=n/16;
		i++;
	}
	a[i]=n;
	for(j=i;j>=0;j--)
	{
		if(a[j]>9)
		{
			printf("%c",a[j]-10+65);
		}
		else
		{
			printf("%d",a[j]);
		}
	}
	return 0;
}
