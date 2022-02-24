#include<stdio.h>
#include<string.h>
void main()
{
	int len,i,j,h,k,part=0,prev=0;
	char word[]="ababcbacadefegdehijhklij";
	len=strlen(word);
	j=len;
	for(i=0;word[i]!='\0';i++){
		for(k=j;k>0;k--){
			if(word[i]==word[k]){
				h=k;
				break;
			}
		}
		if(h>part)
			part=h;
		if(i==part){
			printf("%d ",part-prev+1);
			prev=i+1;
		}
	}
}
