/*  Given a sorted array and a number x, find a pair in array whose sum is closest to x.
Examples:

Input: arr[] = {10, 22, 28, 29, 30, 40}, x = 54
Output: 22 and 30    */

#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],dif,no,n,i,j,s,fno,sno,diff;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number which you want to find the pairs");
	scanf("%d",&no);
	dif=no;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s=a[i]+a[j];
			diff=abs(no-s);
			if(diff<dif)
			{
				fno=a[i];
				sno=a[j];
				dif=diff;
			}
		}
	}
	printf("the pair in array whose sum is closest to no is %d and %d",fno,sno);
}
