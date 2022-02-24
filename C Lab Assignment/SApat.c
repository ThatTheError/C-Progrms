#include<stdio.h>
int main()
{
	int i,j,k=1,l;
	for(i=1;i<=12;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(k<10)
			{
				printf("%d",k);
				k++;
				l=k-2;
			}
			else
			{
				printf("%d",l);
				l--;
				if(l==0)
					k=2;
			}
		}
		printf("\n");
	}
}
