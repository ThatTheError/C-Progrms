#include<stdio.h>
#include<conio.h>
int ffunction(int num)
	{
		int x = 0 ;
		if(num>0){
			num--;
			x=ffunction(num);
			num--;
			x=x+num;
		}
		return x;
	}
void main()
{
	int x;
	x =ffunction(4);
	printf("%d",x);
}
