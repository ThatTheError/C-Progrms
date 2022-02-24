#include<stdio.h>
#include<stdlib.h>
int minver=0;
int findMinPath(int **edgmat,int x,int *visited,int vertices,int min)
{
	int i,mincost1;
	//min=1000;
	for(i=0;i<vertices+1;i++)
	{
		if(visited[i]==0){
			if(edgmat[x][i]<min){
				if(edgmat[x][i]>0){
					if(x!=i){
						mincost1 = edgmat[x][i];
						printf("min in findminpath %d ",mincost1);
						minver = i;
					}
				}
			}
		} 
			//min = edgmat[x][i];
	}
	return mincost1;	
}
void prims(int **edgmat,int *visited,int *consider,int vertices)
{
	int con=0,mincost=0,i,x,min;
	while(con<vertices-1)
	{
		min = 1000;
		for(i=0;i<vertices;i++)
		{
			if(consider[i]==1){
				x = findMinPath(edgmat,i,visited,vertices,min);
				//printf("%d ",x);
				min = x;
			}
		}
		//printf("%d ",min);
		visited[minver] = 1;
		//printf("min in prims %d \n",min);
		//printf("min ver %d \n",minver);
		mincost = mincost+x;
		//printf("%d ",mincost);
		consider[minver] = 1;
		con++;
	}
	printf("Minimum Cost Is = %d\n",mincost);
}
void printGraph(int **edgmat,int vertices)
{
	int i,j;
	for(i=0;i<vertices;i++)
	{
		for(j=0;j<vertices;j++)
			printf("  %d  ",edgmat[i][j]);
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
	int **edgmat,vertices,edges,i,*visited,*consider;
	printf("Enter No. of Vertices");
	visited = (int *)calloc(sizeof(int),vertices);
	consider = (int *)calloc(sizeof(int),vertices);
	scanf("%d",&vertices);
	printf("Enter No. of Edges");
	scanf("%d",&edges);
	edgmat = (int **)calloc(sizeof(int*),vertices);
	for(i=0;i<vertices;i++)
		edgmat[i] = (int *)calloc(sizeof(int),vertices);
	buildGraph(edgmat,edges);
	printGraph(edgmat,vertices);
	consider[0] = 1;
	visited[0] = 1;
	prims(edgmat,visited,consider,vertices);
}
