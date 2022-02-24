
#include<stdio.h>
#include<limits.h>
int main()
{
	printf("maximum limit of integer is %d",INT_MAX);
 	int x= 2147483648;
 	printf("\n%d",x);
 	printf("\nwe know that maximum limit of integer is 2147483647 when we tried to store 2147483648 in x it shows warning like this....\n");
 	printf("[Warning] this decimal constant is unsigned only in ISO C90 [enabled by default]");
 	return 0;
}
 //[Warning] this decimal constant is unsigned only in ISO C90 [enabled by default]
