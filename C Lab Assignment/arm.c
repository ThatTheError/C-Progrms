#include<stdio.h>
#include<math.h>
int main()
{
	int l,n,k,r,c=0,s=0;
	printf("enter a no..");
	scanf("%d",&n);
	k=n;
	l=n;
	while(n>0)
	{
		c=c+1;
		n=n/10;
	}
	while(l>0)
	{
		r=l%10;
		s=s+pow(r,c);
		l=l/10;
	}
	if(k==s)
		printf("armstrong number");
	else
		printf("not an armstrong number");
	return 0;
}
