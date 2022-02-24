/*	 Write a program in C to check if an array can be splitted in such a position that,
	the sum of left side of the splitting is equal to the sum of the right side.   */

#include<stdio.h>
int main()
{
	int arr[100],s,c=1,a=0,b=1,i,j,s1,s2;
	printf("enter the size of the array");
	scanf("%d",&s);
	printf("enter the elements of the array");
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(c<=s-1)
	{
		for(i=0;i<=a;i++)
		{
			s1=s1+arr[i];
		}
		for(j=b;j<s;j++)
		{
			s2=s2+arr[j];
		}
		if(s1==s2)
		{
			printf("yes splitting is possible");
			return 0;
		}
		s1=0;
		s2=0;
		a++;
		b++;
		c++;
	}
	printf("splitting is not possible");
	return 0;
}
