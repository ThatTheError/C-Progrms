#include<stdio.h>
#include<conio.h>
int main()
{
	int d,x,y,z;
	char ch1,ch2;
	printf("enter two characters..");
	scanf("%c",&ch1);
	scanf("%c",&ch2);
	x=ch1;
	y=ch2;
	//printf("%d",x);
	//printf("%d\n",d);
	if(x-y==32 || y-x==32)
	{
		printf("both character are same");
		return 0;
	}
	else if((x-y)>0){
		z=x-32;
		printf("%c\t%c",x,z);
	}
	else if((y-x)>0){
		z=x+32;
		printf("%c\t%c",x,z);
	}
	else
	{
		printf("hbb");
	}
	//printf("after converting the 2nd alphabet opposite of 1st..%c\t%c",ch1,ch2);
	return 0;
}
