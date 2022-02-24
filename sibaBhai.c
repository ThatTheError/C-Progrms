#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>

void arr2str(char *str, int arr[], int n)
{
	int i=0;char ch;
    str= (char *)calloc(sizeof(char),n);
    while(i<n){
    	ch=(char)str+i;
    	strcat(str,ch);
    	i++;
    }
}

int main(int argc, char const *argv[])
{
    
    int i=0,count=0,arr[10] = {21, 44, 33, 89, 20, 93, 40, 46, 100, 53}, n = 10;
    char *str = NULL;
    /* Allocate string size */
    while(i<10)
    	count=count+log10(arr[i])+1;
    	i++;
    }
    arr2str(str, arr, count);
    printf("%s",str);
    return 0;
}
