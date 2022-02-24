#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r1,c1,r2,c2,i,j;
	printf("Enter row size of 1st matrix\n");
	scanf("%d",&r1);
	printf("Enter column size of 1st matrix\n");
	scanf("%d",&c1);
	printf("Enter row size of 2nd matrix\n");
	scanf("%d",&r2);
	printf("Enter column size of 2nd matrix\n");
	scanf("%d",&c2);
	if(r1!=r2 && c1!=c2){
		printf("Invalid size!!");
		return 0;
	}
	int *mat1[r1],*mat2[r2];
	for(i=0;i<r1;i++)
	{
		mat1[i]=(int *)malloc(c1*sizeof(int));
		mat2[i]=(int *)malloc(c1*sizeof(int));
	}
	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&(*(*(mat1+i)+j)));
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&(*(*(mat2+i)+j)));
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			*(*(mat1+i)+j)+=*(*(mat2+i)+j);
		}
	}
	printf("Addition of the two matrix is..\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",*(*(mat1+i)+j));
		}
		printf("\n");
	}
	return 0;
}
