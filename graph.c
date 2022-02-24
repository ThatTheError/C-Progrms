#include<stdio.h>
#include<stdlib.h>

void printEdgMat(int,int**);
void buildGraph(int,int,int**);
int front=-1,rear=-1;
int isEmptyQueue()
{
	if(front>rear)
		return 1;
	else
		return 0;
}
void enqueue(int *queue,int v)
{
	rear = rear+1;
	queue[rear] = v;
}
int dequeue(int *queue)
{
	front = front+1;
	return(queue[front]);
}
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
void bfs(int ver,int **edgmat,int *visited,int *queue)
{
	int i,node;
	while(!isEmptyQueue())
	{
		node = dequeue(queue);
		for(i=0;i<ver;i++){
			if(edgmat[node][i] == 1 && visited[i]==0){
				printf("%d ",i);
				visited[i] = 1;
				enqueue(queue,i);
			}
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
	enqueue(queue,start);
	visited[start] = 1;
	printf("BFS\n");
	printf("%d ",start);
	bfs(vertices,edgmat,visited,queue);o
}
