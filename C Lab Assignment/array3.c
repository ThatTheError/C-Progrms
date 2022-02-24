// program to print all the duplicates elements present in an array
#include<stdio.h>
int main()
{
	int a[]={1,2,3,33,4,4,5,7,-1,3,7,9,-2,-1,-2,33,1,-2,0},i,j,c,a2[sizeof(a)/sizeof(int)];
	int len=sizeof(a)/sizeof(int);
	//printf("%d\n",len);
	for(i=0;i<len-1;i++)
	{
		c=0;
		for(j=i+1;j<len;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				a2[j]=-1;				
			}
		}
		if(c>0 && a2[i]!=-1)
		printf("\t%d",a[i]);
	}
	return 0;
}
