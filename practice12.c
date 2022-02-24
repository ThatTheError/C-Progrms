//   Stock Buy Sell to Maximize Profit
/*   The cost of a stock on each day is given in an array, 
	find the max profit that you can make by buying and selling in those days. 
	For example, if the given array is {100, 180, 260, 310, 40, 535, 695}, 
	the maximum profit can earned by buying on day 0, selling on day 3. Again buy on day 4 and sell on day 6. */

#include<stdio.h>
int main()
{
	int a[100],bp,sp,i,j,s,buy,sell;
	printf("enter the size of the array");
	scanf("%d",&s);
	printf("enter the elements of the array");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	buy = a[0];
	sell = a[1];
	i=0;j=i+1;
	while(j<s)
	{
		if(a[i]>a[j])
		{
			while(a[i]>=a[j])
			{
				i=j;
				j=j+1;
			}
		}			
		bp=i;
		if(buy<=a[bp])
			buy = a[bp];
		while(a[i]<=a[j] && j<s)
		{
			i=j;
			j=j+1;
		}
		sp=i;
		if(sell>=a[sp])
			sell = a[sp];
		printf("\nbuy at date %d and sell at date %d",bp,sp);
		
	}
	printf("\nBuy %d sell %d",buy,sell);
	return 0;
}
