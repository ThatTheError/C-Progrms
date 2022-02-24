#include<stdio.h>
#include<conio.h>
void main()
{
  int process[5],t3;
  float atat=0.0,awt=0.0;
  int at[5],bt[5],i,n,j,tat[5],wt[5],ct[5],t1,t2,btt=0;
  printf("Enter no of process");
  scanf("%d",&n);
  printf("Enter the process name");
  for(i=0;i<n;i++)
  {
    scanf("%d",&process[i]);
  }
  printf("Enter the Arrival time of %d process",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&at[i]);
  }
  printf("Enter the brust time of %d processes",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&bt[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(at[i]>at[j])
      {
        t1=bt[i];
        bt[i]=bt[j];
        bt[j]=t1;
        t2=at[i];
        at[i]=at[j];
        at[j]=t2;
        t3=process[i];
        process[i]=process[j];
        process[j]=t3;
      }
    }
  }
  for(i=0;i<n;i++)
  {
  	btt=btt+bt[i];
  	ct[i]=btt;
  }
	for(i=0;i<n;i++)
  	{
    tat[i] = ct[i]-at[i];
    atat = atat+tat[i];
  }
  atat = atat/n;
  wt[0]=0;
  for(i=1;i<n;i++)
  {
    wt[i]=ct[i-1]-at[i];
    awt = awt + wt[i];
  }
  awt = awt/n;
  printf("process   ArrivalTime   BrustTime   TurnAroundTime   WaitingTime   ResponseTime");
  for(i=0;i<n;i++)
  {
    printf("\n%d            %d            %d                 %d               %d              %d",process[i],at[i],bt[i],tat[i],wt[i],wt[i]);  
	}
	printf("\nAverage waiting time = %f\n",awt);
	printf("Avearage turnaroundtime = %f\n",atat);
	printf("Avearage Responsetime = %f",awt);
}
