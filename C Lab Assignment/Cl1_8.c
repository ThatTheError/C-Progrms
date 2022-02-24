#include<stdio.h>
// 1 yard = 36 inches , 1 feet = 12 inches
int main()
{
	float inch,feet,yard;
	printf("enter inches");
	scanf("%g",&inch);
	feet=inch/12;
	yard=inch/36;
	printf("%g inches = %f feet",inch,feet);
	printf("\n%g inches = %f yard",inch,yard);
	return 0;
}
