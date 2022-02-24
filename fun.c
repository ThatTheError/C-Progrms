#include<stdio.h>
#include<conio.h>

int data();
int calc(int pp,int sp);

int main()
{
	float a,b,x,y;
	//printf("enter you purchase and selling price");
	//scanf("%f%f",&a,&b);
	data(x,y);
	calc(x,y);
	return 0;
}
int data(a,b)
{
	//float a,b;
	printf("enter you purchase and selling price");
	scanf("%f%f",&a,&b);
	return a,b;
	
}
int calc(pp,sp)
{
	float profit,loss;
	if(sp>pp)
	{
	profit=sp-pp;
	printf("you have profit of %f",profit);
	}
	else
	{
	loss=pp-sp;
	printf("you have lose of",loss);
	}
}
