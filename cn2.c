#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char arr[17],*oc[25],cls;
	int i=0,c=1,o1,o2,o3,o4,nb,hb,noh;
	printf("Enter the IP address\n");
	scanf("%s",arr);
	oc[0]=strtok(arr,".");
	while(oc[i]!=NULL)
	{
		i++;
		if(c>4){
			printf("Invalid IP");
			return 0;
		}
		oc[i]=strtok(NULL,".");
		c++;
	}
	o1=atoi(oc[0]);
	o2=atoi(oc[1]);
	o3=atoi(oc[2]);
	o4=atoi(oc[3]);
	if(o1<255 && o2<255 && o3<255 && o4<255 && o1>0)
	{
		if(o1>=0 && o1<=127){
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
			printf("\nClass=D");
			return 0;
		}
		else if(o1>=240 && o1<=255){
			printf("\nClass=E");
			return 0;
		}
	}
	else
	{
		printf("Invalid IP");
		return 0;
	}
	printf("\nClass=%c",cls);
	printf("\nNetwork Bit=%d",nb);
	printf("\nHost Bit=%d",hb);
	printf("\nNumber Of Hosts=%d",noh);
	return 0;
}
