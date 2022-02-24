// Design a Complex Structure and find the addition and multiplication of two complex
// numbers.

#include<stdio.h>
typedef struct complex
{
	float real;
	float imaginary;
}complex;
void printcomplex(complex c)
{
	printf("%0.0f+%0.0fi",c.real,c.imaginary);
}
int main()
{
		complex n1,n2,n3,n4;
		char no[100];
		printf("enter first complex number");
		gets(no);
		sscanf(no,"%f%f",&n1.real,&n1.imaginary);
		printf("enter second complex number");
		gets(no);
		sscanf(no,"%f%f",&n2.real,&n2.imaginary);
		n4.real=n1.real+n2.real;
		n4.imaginary=n1.imaginary+n2.imaginary;
		printf("added value is ");
		printcomplex(n4);
		n3.real=(n1.real*n2.real)-(n1.imaginary*n2.imaginary);
		n3.imaginary=(n1.real*n2.imaginary)+(n1.imaginary*n2.real);
		printf("\nmultiplied value is ");
		printcomplex(n3);
		return 0;
} 
