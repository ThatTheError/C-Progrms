// c program to find the frequency of elemets present in the array..
#include<stdio.h>
int main()
{
	int a[]={1,2,8,3,2,2,2,5,1},i,j,c,fr[8];
	for(i=0;i<8;i++)
	{
		c=1;
		for(j=i+1;j<8;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				fr[j]=-1;
			}
		}
		//printf("the frequescy of %d is %d",a[i],c);
		if(fr[i]!=-1)
		{
			fr[i]=c;
		}
	}
	for(i=0;i<8;i++)
	{
		if(fr[i]!=-1)
		printf("\nfrequency of %d is %d",a[i],fr[i]);
	}
	return 0;
	
}
