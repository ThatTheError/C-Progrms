#include<stdio.h>
int main()
{
	int c=1,i,co=0,p=2;
	printf("0,");
	while(c<20)
	{
		for(i=1;i<=p;i++)
		{
			if(p%i==0)
			co++;
		}
		if(co==2)
		{
			printf("%d,",p-1);
			c++;
		}
		p++;
		co=0;
	}
}
