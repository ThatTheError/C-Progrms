#include<stdio.h>
#include<stdlib.h>
void coinChange(int cr,int *notearr,int nn)
{
	int n=nn,*arrcnt,rm=cr,i,c=0;
	arrcnt = (int *)calloc(sizeof(int),n);
	for(i=0;i<n;i++){	//9725
		c=0;
		while(notearr[i]<=rm){
			rm = cr-notearr[i];
			cr = cr-notearr[i];
			c++;
		}
		arrcnt[i]=c;
	}
	printf("Notes required = \n");
	for(i=0;i<n;i++){
		if(arrcnt[i]>0)
			printf("\n%d number of %d notes",arrcnt[i],notearr[i]);
	}
}
void main()
{
	int cr,notearr[] = {2000,500,200,100,50,20,10,5,2,1};
	int n = sizeof(notearr)/sizeof(int);
	printf("Enter Main Amount\n");
	scanf("%d",&cr);
	coinChange(cr,notearr,n);	
}
