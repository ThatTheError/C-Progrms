/*   Write a program in C to return the number of clumps
   (a series of 2 or more adjacent elements of the same value) in a given array.  */

#include<stdio.h>
int main()
{
	int a[10],x=0,y=1,p=0,c=0,i;
	printf("enter the elements of the array");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	while(y<=10)
	{
		while(a[x]==a[y])
		{
			c++;
			y++;
		}
		if(c>0)
			p++;
		c=0;
		x=y;
		y=y+1;
	}
	printf("the array have %d number of adjecent elements",p);
	return 0;
}
