#include<stdio.h>
int main() 
{ 
	unsigned int num = 0, k = 1, mask=0, bit=0; 
	scanf("%d%d",&num,&mask);
	//TODO input num as binary and convert to decimal
	//TODO Check mask is binary (only 0 and 1)
	while (mask!=0) {
		if (mask%10) {
			num = num & (~(1 << (k - 1)));
		}
		mask/=10;
		k++;
	}
	printf("after clear : %u",num);
	return 0; 
} 
 
