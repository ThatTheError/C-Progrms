#include<stdio.h>
int main()
{
	int a=5,b=8,c=3,ans;
	ans=(a>b?(a>c?a:c):(b>c?b:c));
	printf("greatest among  the three number is %d",ans);
	return 0;
}
