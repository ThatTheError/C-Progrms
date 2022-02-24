#include<stdio.h>
int main()
{
	int i=1,j=3,c=1,k=i+j;
	while(c<=20)
	{
		printf("%d,",i);
		i=j;
		j=k;
		k=i+j;
		c++;
	}
}
