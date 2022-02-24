#include<stdio.h>
int main()
{
	int a[100],c=1,ini,ret,i,no,n;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	no=a[0];
	if(a[0]>a[1])
		ini=1;
	else
		ini=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>no)
		{
			no=a[i];
			ret=1;
		}
		if(ret!=ini)
		{
			c++;
			ini=ret;
		}
		if(a[i]<no)
		{
			no=a[i];
			ret=0;
		}
		if(ret!=ini)
		{
			c++;
			ini=ret;
		}
	}
	printf("the longest subsequence is %d",c);
	return 0;
}

