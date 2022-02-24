#include<stdio.h>
void main()
{
	int arr[3][3]={{00,01,02},{10,11,12},{20,21,22}};
	int (*p)[3]=arr;
	//printf("\n%d",p);
	printf("\n%d",*(*(p+1)+2));
	printf("\n%d",*(p+2));
	printf("\n%d",*(p+3));
	printf("\n%d",*(p+4));

}
