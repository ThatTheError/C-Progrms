#include<stdio.h>
#include<string.h>
void main()
{
	int len,i,j,c=1,rep=0;
	char word[]="qwer";
	len=strlen(word);
	len=len/4;
	for(i=0;word[i]!='\0';i++)
	{
		for(j=i+1;word[j]==word[i];j++)
		{
			c++;
		}
		i=j-1;
		if(len<c)
			rep=c-len;
		c=1;
	}
	printf("NO. of replacement required %d",rep);
}
