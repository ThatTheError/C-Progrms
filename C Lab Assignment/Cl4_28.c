#include<stdio.h>
int main()
{
    int num1, num2, gcd, lcm, remainder, numerator, denominator;
	printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        numerator=num1;
        denominator=num2;
    }
    else
    {
        numerator=num2;
        denominator=num1;
    }
    remainder=numerator%denominator;
    do
    {
    	numerator=denominator;
        denominator=remainder;
        remainder=numerator%denominator;
    }
    while(remainder!=0);
    gcd=denominator;
    lcm=num1*num2/gcd;
    printf("gcd of %d and %d is %d",num1,num2,gcd);
    printf("\nlcm of %d and %d is %d",num1,num2,lcm);
    return 0;
}
