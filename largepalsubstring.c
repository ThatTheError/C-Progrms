#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void find_range(int item, int arr[], int size, int *lindex, int *rindex) {
  int i, j;
  for (i = 0; i < size; i++) {
    if (arr[i] == item) {
      *lindex = i;
      break;
    }
  }
  for (j = size-1; j >=0; j--) {
    if (arr[j] == item) {
      *rindex = j;
      break;
    }
  }
}
void main()
{
	int diff=2,i,j,len,lmax, rmax, smax, rowmax, l, palrow = 0;
	char word[]="The longest known palindromic word is saippuakivikauppia",palstr[100];
	len=strlen(word);
	int *mat[len];
	for(i=0;i<len;i++){
		mat[i]=(int *)calloc(sizeof(int),len);
	}
	for(i=0;i<len;i++){
		j=i+1;
		mat[i][i]=1;
		if(word[i]==word[j])
			mat[i][j]=1;
		else
			mat[i][j]=0;
	}
	for(diff=2;diff<len;diff++){
		for(i=0;i<len;i++){
			if(word[i]==word[i+diff] && mat[i+1][i+diff-1]==1)
				mat[i][i+diff]=1;
			else
				mat[i][i+diff]=0;
		}
	}
	lmax = 0, rmax = 0, smax = 0, palrow = 0;
  	for (i = 0; i < len; i++) {
    	lmax = 0, rmax = 0;
    	find_range(1, mat[i], len, &lmax, &rmax);
    	if (smax < rmax - lmax) {
    	  smax = rmax - lmax;
    	  palrow = i;
    	}
  	}	
  	find_range(1, mat[palrow], len, &lmax, &rmax);
  	for (i = lmax; i <= rmax; i++) {
  	  printf("%c", word[i]);
  	}
}
