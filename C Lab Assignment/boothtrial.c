#include<stdio.h>
#include<conio.h>
#include<math.h>
void dec_to_bin(int n,int* res)
{
	int r,i=0;
	while(n>0)
	{
		r=n%2;
		res[i]=r;
		n=n/2;
		i++;
	}
}
void twos_comp(int* res2,int* res3)
{
	int i;
	for(i=0;i<4;i++)
	{
		if(res2[i]==0)
			res3[i]=1;
		else
			res3[i]=0;
	}
}
void bin_to_dec(int* res17,int* res)
{
	int i,j=0,r=0;
	for(i=3;i>=0;i--)
	{
		*res=(*res+(res17[i]*pow(2,j)));
		j++;
	}
	//printf("\n%d",r);
	//return res;
	//return res18;
	//printf("\n%d",res18);
}
int main()
{
	int i,q,x,res=0;
	int que1[]={0,0,0,0},que2[]={0,0,0,0},twoscomp[3];
	printf("enter the Q");
	scanf("%d",&q);
	dec_to_bin(q,que1);
	for(i=0;i<4;i++)
	{
		que2[i]=que1[3-i];
		//multiplicant2[i]=multiplicant1[3-i];
	}
	for(i=0;i<4;i++)
	{
		printf("%d",que2[i]);
	}
	printf("\n");
	twos_comp(que2,twoscomp);
	for(i=0;i<4;i++)
	{
		printf("%d",twoscomp[i]);
	}
	bin_to_dec(que2,&res);
	printf("\n%d",res);
	//printf("\n%d",1%2);
	return 0;
}

