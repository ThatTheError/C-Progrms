#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *array,int i,int j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
int partition(int *array,int lower,int upper)
{
	int i=lower-1,j,pivot = array[upper];
	for(j=lower;j<upper;j++){
		if(array[j]<pivot){
			i++;
			swap(array,i,j);
		}	
	}
	swap(array,i+1,upper);
	return(i+1);
}
void quick_sort(int *array,int lower,int upper)
{
	int x;
	if(lower<upper){
		x=partition(array,lower,upper);
		quick_sort(array,lower,x-1);
		quick_sort(array,x+1,upper);		
	}
}
void main()
{
	FILE *input_file,*output_file;
	int array[100],i=0,n=0,number;
	input_file = fopen("input.txt","r");
	while(!feof(input_file))
	{
		if(fscanf(input_file,"%d",&number)){
			array[i++]=number;
		}
		else
			break;
	}
	fclose(input_file);
	n=i;
	quick_sort(array,0,n-2);
	output_file = fopen("output.txt","w");
	printf("Sorting done please check the output file..");
	for(i=0;i<n-1;i++)
		fprintf(output_file,"%d ",array[i]);
	fclose(output_file);
}
