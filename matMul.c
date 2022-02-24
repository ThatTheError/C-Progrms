#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r1,c1,r2,c2,i,j,k;
	printf("Enter the size of row of 1st matrix\n");
	scanf("%d",&r1);
	printf("Enter the size of column of 1st matrix\n");
	scanf("%d",&c1);
	printf("Enter the size of row of 2nd matrix\n");
	scanf("%d",&r2);
	printf("Enter the size of column of 2nd matrix\n");
	scanf("%d",&c2);
	if(c1!=r2){
		printf("invalid size");
		return(0);
	}
	int *mat1[r1],*mat2[r2],*mat3[r1];
	for(i=0;i<r1;i++)
	{
		mat1[i]=(int *)malloc(c1*sizeof(int));
		mat3[i]=(int *)malloc(c2*sizeof(int));
	}
	for(i=0;i<r2;i++){
		mat2[i]=(int *)malloc(c2*sizeof(int));
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
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&(*(*(mat2+i)+j)));
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			*(*(mat3+i)+j)=0;
			for(k=0;k<c1;k++)
			{
				*(*(mat3+i)+j)+=(*(*(mat1+i)+k))*(*(*(mat2+k)+j));
			}
		}
	}
	printf("Multiplication of the two matrix is..\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",*(*(mat3+i)+j));
		}
		printf("\n");
	}
	return 0;
}
