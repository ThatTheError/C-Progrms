/* 			OPTIMAL Page Replacement Program Using C
   			By, V.Gopal Krushna Patro 				*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void main()
{
	int *req,*frame,*pos;
	int no_req,f_size,i,hit=0,k,j,big,big_ind,l;
	bool happen=false;
	printf("Enter the no. of requests..");
	scanf("%d",&no_req);
	req = (int*)malloc(no_req * sizeof(int));
	printf("Enter the requests");
	for(i=0;i<no_req;i++)
	{
		scanf("%d",&req[i]);
	}
	printf("Enter size of the frame");
	scanf("%d",&f_size);
	frame = (int*)malloc(sizeof(int)*f_size);
	pos = (int*)malloc(sizeof(int)*f_size);
	for(i=0;i<f_size;i++)
	{
		frame[i]=req[i];
		pos[i]=f_size-i;
	}
	for(i=f_size;i<no_req;i++)			
	{
		happen=false;
		for(k=0;k<f_size;k++)
		{
			if(req[i]==frame[k]){
				happen=true;
				break;
			}
		}						//  3 2 1 3 4 1 6 2 4 3 4 2 1 4 5 2 1 3 4
		if(happen==true)
		{	
			hit++;
			for(l=0;l<f_size;l++)
			{
				if(l==k)
					pos[l]=1;
				else
					pos[l]=pos[l]+1;
			}
		}				
		else
		{
			big = pos[0];
			for(k=0;k<f_size;k++)
			{
				if(pos[k]>=big)
				{
					big=pos[k];big_ind=k;
				}
			}
			frame[big_ind]=req[i];
			for(l=0;l<f_size;l++){
				if(l==big_ind)
					pos[l]=1;
				else
					pos[l]=pos[l]+1;
			}
		}	
	}
	printf("HIT = %d \nMISS = %d",hit,no_req-hit);
}
