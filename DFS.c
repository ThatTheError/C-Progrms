#include<stdio.h>
#include<stdlib.h>

void printEdgMat(int,int**);
void buildGraph(int,int,int**);
void buildGraph(int ver,int edge,int **edgmat)
{
	int v1,v2,i;
	for(i=0;i<edge;i++)
	{
		printf("Enter the conncetion vertex->vertex\n");
		scanf("%d",&v1);		
		scanf("%d",&v2);
		edgmat[v1][v2] = 1;
		edgmat[v2][v1] = 1;
	}
}
void dfs(int ind,int ver,int **edgmat,int *visited)
{
	int i;
	printf("%d ",ind);
	visited[ind] = 1;
	for(i=0;i<ver;i++)
	{
		if(edgmat[ind][i] == 1 && visited[i] == 0){
			dfs(i,ver,edgmat,visited);
		}
	}
}
void printEdgMat(int ver,int **edgmat)
{
	int i,j;
	for(i=0;i<ver;i++){
		for(j=0;j<ver;j++){
			printf("%d ",edgmat[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int i,vertices,start,edges,**edgmat,*visited,*queue,ch,x=1;
	printf("Enter no. of vertices\n");
	scanf("%d",&vertices);
	queue = (int *)calloc(sizeof(int),vertices);
	printf("Enter no. of edges\n");
	scanf("%d",&edges);
	visited = (int *)calloc(sizeof(int),vertices);
	edgmat = (int **)calloc(sizeof(int*),vertices);
	for(i=0;i<vertices;i++){
		edgmat[i] = (int *)calloc(sizeof(int),vertices);
	}
	buildGraph(vertices,edges,edgmat);
	printEdgMat(vertices,edgmat);
	printf("Enter the vertex from where you want to start travese\n");
	scanf("%d",&start);
	printf("DFS\n");
	dfs(start,vertices,edgmat,visited);
}
