/*You are given an integer array arr. You can choose a set of integers and remove all the 
occurrences of these integers in the array.Return the minimum size of the set so that at 
least half of the integers of the array are removed.
			Input: arr = [3,3,3,3,5,5,5,2,2,7]
			Output: 2														*/					

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void findOccurance(int*);
void sortOccurance(int*);
int final(int*);
int *occurance,count=0,n,set=1,i,j,c;
void main()
{
	int *array,res;
	printf("Enter the size of the array");
	scanf("%d",&n);
	array = (int *)malloc(sizeof(int)*n);
	occurance = (int *)malloc(sizeof(int)*n);
	printf("Enter the elements of the array");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	findOccurance(array);
	sortOccurance(occurance);
	res=final(occurance);
	printf("minimum size of the set is %d",res);
}
void findOccurance(int *array){
	c=1;
	for(i=0;i<n;){
		if(i==n-1){
			occurance[count]=1;
			break;
		}
		else
			j=i+1;
		while(array[i]==array[j]){
			j++;
			c++;
		}
		i=i+c;
		occurance[count++]=c;
		c=1;
	}
	return;
}
void sortOccurance(int *occurance){
	int temp;
	for(i=0;i<count;i++){
		for(j=i+1;j<=count;j++){
			if(occurance[i]<occurance[j]){
				temp=occurance[i];
				occurance[i]=occurance[j];
				occurance[j]=temp;
			}
		}
	}
}
int final(int *occurance){
	int sum=occurance[0];
	for(i=1;i<=count;i++){
		while(sum<n/2){
			sum=sum+occurance[i];
			set++;
		}
		if(sum>=n/2)
			return(set);
	}
}
