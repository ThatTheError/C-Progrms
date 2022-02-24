// c program to print all the non-duplicate elements from the array
#include<stdio.h>
int main()
{
	int a[]={7,3,1,4,2,0,8,43,9,4,3,12,-1,-1,3,0,43,23,55,84},a2[19],s=0,i,j,l,c;
	//l=sizeof(a)/sizeof(int);
	for(i=0;i<19;i++)
	{
		c=0;
		for(j=i+1;j<=19;j++)
		{
			if(a[i]==a[j])
			{
				a2[i]=-1;
				a2[j]=-1;
				c++;
			}
		}
		if(c==0 && a2[i]!=-1)
		{
			printf("\t%d",a[i]);
		}
	}
	return 0;
}
