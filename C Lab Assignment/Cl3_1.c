#include<stdio.h>
#include<limits.h>
int main()
{
	printf("\nSize of int is %d Bytes",sizeof(int));
	printf("\nSize of unsigned int is %d Bytes",sizeof(unsigned int));
	printf("\nSize of short int is %hd Bytes",sizeof(short int));
	printf("\nSize of unsigned short int is %d Bytes",sizeof(unsigned short int));
	printf("\nSize of long int is %d Bytes",sizeof(long int));
	printf("\nSize of unsigned long int is %d Bytes",sizeof(unsigned long int));
	printf("\nSize of long long int is %d Bytes",sizeof(long long int));
	printf("\nSize of unsigned long long int is %d Bytes",sizeof(unsigned long long int));
	printf("\nSize of signed char is %d Bytes",sizeof(signed char));
	printf("\nSize of unsigned char is %d Bytes",sizeof(unsigned char));
	printf("\nSize of float is %d Bytes",sizeof(float));
	printf("\nSize of double is %d Bytes",sizeof(double));
	printf("\nSize of long double is %d Bytes\n",sizeof(long double));
	
	printf("\nNow the ranges of each datatypes....\n");
	printf("-----------------------------------------");

   	printf("\nThe maximum value of Signed CHAR is = %d\n", SCHAR_MAX);
   	printf("The minimum value of CHAR is = %d\n", CHAR_MIN);
   	printf("The maximum value of CHAR is = %d\n", CHAR_MAX);
   	printf("The maximum value of Unsigned CHAR is = %u\n", UCHAR_MAX);

   	printf("\nThe minimum value of Signed Short is = %d\n", SHRT_MIN);
   	printf("The maximum value of Signed Short is = %d\n", SHRT_MAX);
   	printf("The maximum value of Unsigned Short is = %u\n", USHRT_MAX);

   	printf("\nThe minimum value of Signed INT is = %d\n", INT_MIN);
   	printf("The maximum value of Signed INT is = %d\n", INT_MAX);
   	printf("The maximum value of Unsigned INT is = %u\n", UINT_MAX);

   	printf("\nThe minimum value of Signed LONG is = %ld\n", LONG_MIN);
   	printf("The maximum value of Signed LONG is = %ld\n", LONG_MAX);
   	printf("The maximum value of Unsigned LONG is = %lu\n", ULONG_MAX);


}
