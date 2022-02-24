#include<stdio.h>
#include<stdlib.h>
int *pushed2,top=0;
void push(int n){
	pushed2[top]=n;
}
int main()
{
	int *pushed,*poped,i,j,ps;
	printf("Enter how many elements you want to push\n");
	scanf("%d",&ps);
	pushed=(int *)malloc(sizeof(int)*ps);
	poped=(int *)malloc(sizeof(int)*ps);
	pushed2=(int *)malloc(sizeof(int)*ps);
	printf("Enter the elements which are pushed\n");
	for(i=0;i<ps;i++)
	{
		scanf("%d",&pushed[i]);
	}
	printf("Enter the poped array\n");
	for(i=0;i<ps;i++){
		scanf("%d",&poped[i]);
	}
	i=0,j=0;
	push(pushed[i]);i++;
	while(j<ps)
	{
		if(pushed2[top]!=poped[j]){
			top++;
			push(pushed[i]);
			i++;
		}
		else{
			top--;
			j++;
		}
	}
	printf("%d",top);
	if(top==-1)
		printf("True");
	else
		printf("False");
	return 0;
}

