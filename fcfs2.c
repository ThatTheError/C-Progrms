#include<stdio.h>
struct fcfs
{
	char p[5];
	int burst;
	int  wt;
	int  tt;
};
void main()
{
	struct fcfs pro[10];
	int i,j,n,avgwt=0,avgtt=0;
	printf("\n Enter the number of process:");
	scanf("%d",&n);
	printf("\n Enter the process name and burst time:");
	for(i=0;i<n;i++)
	{
		printf("\n Enter the process %d",i+1);
		//scanf("%s%d",&pro[i].p,&pro[i].burst);
		scanf("%s",&pro[i].p);
		scanf("%d",&pro[i].burst);
	}
	printf("\n Guant Chart:");
	printf("\n-----------------------------------------------");
	for(i=0;i<n;i++)
	{
		printf("\n%s",pro[i].p);
	}
	printf("\n-----------------------------------------------");
	pro[0].wt=0;
	for(i=0;i<n;i++)
	{
		j=i-1;
		pro[i].wt=pro[j].wt+pro[j].burst;
		avgwt=avgwt+pro[j].wt;
	}
	printf("\n \t");
	for(i=0;i<n;i++)
	{
		printf("\n  %d",pro[i].wt);
	}
	for(i=0;i<n;i++)
	{
		j=i+1;
		pro[i].tt=pro[j].wt;
		avgtt=avgtt+pro[i].tt;
	}
	printf("\n Process  \t  Burst time \t Waiting time \t Turn around      time");
	for(i=0;i<n;i++)
	{
		printf("\n %s \t\t%d \t %d \t %s");
	}
	printf("\n Average waiting time : %d ms",avgwt/n);
    printf("\n Average turn around time : %d ms",avgtt/n);
}
