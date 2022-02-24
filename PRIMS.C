#include<stdio.h>
#include<stdlib.h>

void printGraph(int **edgmat,int vertices)
{
	int i,j;
	for(i=0;i<vertices;i++)
	{
		for(j=0;j<vertices;j++)
			printf("%d",edgmat[i][j]);
		printf("\n");
	}
}
void buildGraph(int **edgmat,int edges)
{
	int v1,v2,i,cost;
	for(i=0;i<edges;i++)
	{
		printf("Enter the conncetion vertex->vertex\n");
		scanf("%d",&v1);		
		scanf("%d",&v2);
		printf("Enter the cost");
		scanf("%d",&cost);
		edgmat[v1][v2] = cost;
		edgmat[v2][v1] = cost;
	}
}
void main()
{
	int **edgmat,vertices,edges,i;
	printf("Enter No. of Vertices");
	scanf("%d",&vertices);
	printf("Enter No. of Edges");
	scanf("%d",&edges);
	edgmat = (int **)calloc(sizeof(int*),vertices);
	for(i=0;i<vertices;i++)
		edgmat[i] = (int *)calloc(sizeof(int),vertices);
	buildGraph(edgmat,edges);
	printGraph(edgmat,vertices);
}
