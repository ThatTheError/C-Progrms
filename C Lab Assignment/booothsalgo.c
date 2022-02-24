#include<stdio.h>
#include<conio.h>
#include<math.h>
void dec_to_bin(int,int*);
void twos_comp(int* ,int*);
void full_adder(int*,int*,int*,int*);
void shifting(int*,int*);
void assemble(int*,int*,int*,int*);
void disassemble(int*,int*,int*,int*);
void bin_to_dec(int*,int*);
int main()
{
	int q,i,mul,c=0,count=1,qprev=0,decimal=0,qzero;
	int pre[]={0,0,0,0},acc[]={0,0,0,0},que1[]={0,0,0,0},multiplicant1[]={0,0,0,0},que2[]={0,0,0,0},multiplicant2[]={0,0,0,0};
	int twoscomp[4],addval[4],aftershift[9],beforeshift[9],one[]={0,0,0,1};
	
	printf("enter the Q");
	scanf("%d",&q);
	printf("enter the multiplicant");
	scanf("%d",&mul);
	dec_to_bin(q,que1);
	dec_to_bin(mul,multiplicant1);
	for(i=0;i<4;i++)
	{
		que2[i]=que1[3-i];
		multiplicant2[i]=multiplicant1[3-i];
	}
	//  rough..
	
	for(i=0;i<4;i++)
	{
		printf("\ndecimal to binary que2...%d\t%d",i,que2[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("\ndecimal to binary multipicant2...%d\t%d",i,multiplicant2[i]);
	}
	twos_comp(multiplicant2,twoscomp);
	for(i=0;i<4;i++)
	{
		printf("\nafter twos complement the multiplicant %d\t%d",i,twoscomp[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("\nthe value of accumulaator is%d\t%d",i,acc[i]);
	}
	full_adder(acc,twoscomp,addval,&c);
	for(i=0;i<4;i++)
	{
		printf("\nafter addition the value will be %d\t%d",i,addval[i]);
	}
	for(i=0;i<4;i++)
	{
		acc[i]=addval[i];
	}
	for(i=0;i<4;i++)
	{
		printf("\nafter addition the updated accumulator..%d\t%d",i,acc[i]);
	}
	assemble(acc,que2,beforeshift,&qprev);
	for(i=0;i<=8;i++)
	{
		printf("\nafter assemble the acc que and q-1..%d\t%d",i,beforeshift[i]);
	}
	shifting(beforeshift,aftershift);
	for(i=0;i<=8;i++)
	{
		printf("\nafter shifting the value will be..%d\t%d",i,aftershift[i]);
	}
	disassemble(aftershift,acc,que2,&qprev);
	for(i=0;i<4;i++)
	{
		printf("\nafter disassemble the value of acc will be..%d\t%d",i,acc[i]);
	}
	//rough
	
	while(count<=4)
	{
		qzero=que2[3],c=0;
		if(qzero==1 && qprev==0)
		{
			twos_comp(multiplicant2,twoscomp);
			full_adder(acc,twoscomp,addval,&c);
			for(i=0;i<4;i++)
			{
				acc[i]=addval[i];
			}
			assemble(acc,que2,beforeshift,&qprev);
			shifting(beforeshift,aftershift);
			disassemble(aftershift,acc,que2,&qprev);
		}
		else if(qzero==0 && qprev==1)
		{
			full_adder(acc,multiplicant2,addval,&c);
			for(i=0;i<4;i++)
			{
				acc[i]=addval[i];
			}
			assemble(acc,que2,beforeshift,&qprev);
			shifting(beforeshift,aftershift);
			disassemble(aftershift,acc,que2,&qprev);
			for(i=0;i<4;i++)
			{
				printf("\nthe value of accumulaator is%d\t%d",i,acc[i]);
			}
			for(i=0;i<4;i++)
			{
				printf("\nupdated que value is...%d\t%d",i,que2[i]);
			}
			//printf("\n%d",qprev);
		}
		else
		{
			assemble(acc,que2,beforeshift,&qprev);
			shifting(beforeshift,aftershift);
			disassemble(aftershift,acc,que2,&qprev);
		}	
		count++;
	}
	assemble(acc,que2,beforeshift,&qprev);
	for(i=0;i<8;i++)
	{
		printf("\n%d",beforeshift[i]);
	}
	bin_to_dec(beforeshift,&decimal);
	printf("\nfinal answer is...%d",decimal);
}
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
	int i,c=0,one[]={0,0,0,1};
	for(i=0;i<4;i++)
	{
		if(res2[i]==0)
			res3[i]=1;
		else
			res3[i]=0;
	}
	full_adder(res3,one,res3,&c);
}
void full_adder(int* res4,int* res5,int* res6,int* c)
{
	int i;
	for(i=3;i>=0;i--)
	{
		if(res4[i]==0 && res5[i]==0 && *c==0)
		{
			*c=0;
			res6[i]=0;
		}
		else if(res4[i]==0 && res5[i]==0 && *c==1)
		{
			*c=0;
			res6[i]=1;
		}
		else if(res4[i]==0 && res5[i]==1 && *c==0)
		{
			*c=0;
			res6[i]=1;
		}
		else if(res4[i]==0 && res5[i]==1 && *c==1)
		{
			*c=1;
			res6[i]=0;
		}
		else if(res4[i]==1 && res5[i]==0 && *c==0)
		{
			*c=0;
			res6[i]=1;
		}
		else if(res4[i]==1 && res5[i]==0 && *c==1)
		{
			*c=1;
			res6[i]=0;
		}
		else if(res4[i]==1 && res5[i]==1 && *c==0)
		{
			*c=1;
			res6[i]=0;
		}
		else
		{
			*c=1;
			res6[i]=1;
		}
	}
}
void shifting(int* res7,int* res8)
{
	int i,signbit=res7[0];
	res8[0]=res7[0];
	for(i=1;i<=8;i++)
	{
		res8[i]=res7[i-1];
	}
}
void assemble(int* res9,int* res10,int* res11,int* qprev)
{
	int i;
	for(i=0;i<=8;i++)
	{
		if(i>=0 && i<=3)
		{
			res11[i]=res9[i];
		}
		else if(i>=4 && i<=7)
		{
			res11[i]=res10[i];
		}
		else if(i==8)
		{
			res11[i]=*qprev;
		}
	}
}
void disassemble(int* res13,int* res14,int* res15,int* qprev)
{
	int i;
	for(i=0;i<=8;i++)
	{
		if(i>=0 && i<=3)
		{
			res14[i]=res13[i];
		}
		else if(i>=4 && i<=7)
		{
			res15[i]=res13[i];
		}
		else
		{
			*qprev=res13[i];
		}
	}
}
void bin_to_dec(int* res17,int* decimal)
{
	int i,j=0;
	for(i=7;i>=0;i--)
	{
		*decimal=(*decimal+(res17[i]*pow(2,j)));
		j++;
	}
}


