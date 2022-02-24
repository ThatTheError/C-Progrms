#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int arr[4],o1;
	int a,i,nb,hb,noh;
	char cls;
	printf("Enter the ip");
	a = scanf("%d.%d.%d.%d",&arr[0],&arr[1],&arr[2],&arr[3]);
	o1=arr[0];
	if(a==4 && arr[1]) {
		for(i=0;i<4;i++){
			if(o1<0){
				printf("Invalid IP");
				return 0;
			}
			else if(o1>=0 && o1<=127){
				cls='A';
				nb=8;
				hb=32-nb;
				noh=pow(2,hb);
			}
			else if(o1>=128 && o1<=191){
				cls='B';
				nb=16;
				hb=32-nb;
				noh=pow(2,hb);
			}
			else if(o1>=192 && o1<=223){
				cls='C';
				nb=24;
				hb=32-nb;
				noh=pow(2,hb);
			}
			else if(o1>=224 && o1<=239){
				cls='D';
			}
			else{
				cls='E';
			}
		}
	}	
	else{
		printf("Invalid IP");
		return 0;
	}
	printf("\nclass=%c",cls);
	printf("\nnetwork Bit=%d",nb);
	printf("\nhost bit=%d",hb);
	printf("\nnumber of hosts=%d",noh);
	return 0;
}
