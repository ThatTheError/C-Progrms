#include<stdio.h>
int main()
{
	int x=44,y=64,z;
	printf("\n%d",~x);
	z=x|y;
	printf("%d",z);
	x=y--;
	z=x+++y;
	x=--y;
	printf("\n%d\t%d\t%d",x,y,z);
	
}
/*-45
352
0
108
16
--------------------------------
Process exited with return value 3
Press any key to continue . . .*/

/*62      62      127
--------------------------------
Process exited with return value 9
Press any key to continue . . .*/
