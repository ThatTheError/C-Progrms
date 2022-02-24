#include<stdio.h>
int main()
{
	int flag=0,x=0,i,c=0;
	while(c<20)
	{
		x++;
		for(i=2;i<x;i++)
		{
			if(x%i==0)
				flag=1;
		}
		if(flag==0)
		{
			printf("%d\t",x-1);
			c++;
		}
		flag=0;
	}	
}
