#include<stdio.h>
int main()
{
	float x=10.0;
	int y=10,z;
	printf("%f",x%10);
	 /*after executing this line it shows error like this..
	6	15	E:\C Lab Assignment\Cl3_3.c	[Error] invalid operands to binary % (have 'float' and 'int')*/
	printf("%d",y/0);
	 /*after executing this line it shows error like this..
	 9	15	E:\C Lab Assignment\Cl3_3.c	[Warning] division by zero [-Wdiv-by-zero]*/
	10=z;
	/*after executing this line it shows error like this..
	12	4	E:\C Lab Assignment\Cl3_3.c	[Error] lvalue required as left operand of assignment*/
	return 0;
}
