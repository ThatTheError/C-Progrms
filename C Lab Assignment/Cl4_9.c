#include<stdio.h>
int main()
{
	int n=0,c=1;
	while(c<=20)
	{
		printf("%d,",((n*(n+1))/2)+1);
		c++;
		n++;	
	}
}
