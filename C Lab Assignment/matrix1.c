#include<stdio.h>
int main()
{
	int r,c,a[3][3],b[3][3],res[3][3],i,j,k;
	printf("enter the size of the row");
	scanf("%d",&r);
	printf("enter the size of the column");
	scanf("%d",&c);
	printf("enter the value of 1st matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the values of 2nd matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res[i][j]=0;
			for(k=0;k<c;k++)
			{
				res[i][j]=res[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("the multiplied matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
