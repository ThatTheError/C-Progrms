#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0,k=0,len,co=0;
	char ch[]="to be or not to be";char word[100][100];
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		if(ch[i]!=' ' && ch[i]!='\0'){
			word[k][j++]=ch[i];
		}
		else{
			word[k][j]='\0';
			k++;j=0;
		}
	}
	for(i=0;i<k+1;i++){
		for(j=0;j<k+1;j++){
			printf("%c",word[j][i]);
		}
		printf("\n");
	}
}
