/* 			LRU Page Replacement Program Using C
   			By, V.Gopal Krushna Patro 				*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void main()
{
	int *req,*frame;
	int no_req,f_size,i,hit=0,k,j,big=0,big_ind=0,l,further_not_required=0;
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
	for(i=0;i<f_size;i++)
		frame[i]=req[i];
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
			hit++;				
		else
		{
			for(k=0;k<f_size;k++)
			{
				for(l=i+1;l<no_req;l++)
				{
					if(frame[k]!=req[l]){
						further_not_required++;
					}
					else if(frame[k]==req[l] && l>big){
						big = l;
						big_ind = k;
						break;
					}
				}
				if(further_not_required == no_req-i+1)
					break;
			}
			if(further_not_required == no_req-i+1)
				frame[k]=req[i];
			else
				frame[big_ind]=req[i];
		}	
	}
	printf("HIT = %d \nMISS = %d",hit,no_req-hit);
}
