#include<stdio.h>
void completion_time(int*,int*,int);
void turn_around_time(int*,int*,int*,int);
void waiting_time(int*,int*,int*,int);
void print(int*,int*,int*,int*,int*,int);
int main()
{
	int i,n,brust[100],completion[100],arrival[100],wt[100],tat[100];
	printf("enter number of processes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter arrival time of process-%d = ",i);
		scanf("%d",&arrival[i]);
		printf("enter brust time of process-%d = ",i);
		scanf("%d",&brust[i]);
	}
	completion[0]=brust[0];
	arrival[0]=0;
	completion_time(brust,completion,n);
	turn_around_time(completion,arrival,tat,n);
	waiting_time(tat,brust,wt,n);
	print(arrival,brust,completion,tat,wt,n);
	return 0;
}
void completion_time(int* ar1,int* ar2,int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		ar2[i]=ar1[i]+ar2[i-1];
	}
}
void turn_around_time(int* ar3,int* ar4,int* ar5,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		ar5[i]=ar3[i]-ar4[i];
	}
}
void waiting_time(int* ar6,int* ar7,int* ar8,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		ar8[i]=ar6[i]-ar7[i];
	}
}
void print(int* arr,int* bru,int* com,int* turn,int* wait,int n)
{
	int i;float awt;
	printf("\n------------------------------------------------------------------------------------------------------");
	for(i=0;i<n;i++)
	{
		awt=awt+wait[i];
		printf("\nprocess-%d  Arrival_time-%d  Brust_time-%d    completion_time-%d   Turn_Around_Time-%d   Waiting_Time-%d",i,arr[i],bru[i],com[i],turn[i],wait[i]);
	}
	printf("\n------------------------------------------------------------------------------------------------------");
	
	printf("\n\n-------------------------------------------------------");
	printf("\n*  Average waiting time of the process is = %f  *",awt/n);
	printf("\n-------------------------------------------------------");
}
