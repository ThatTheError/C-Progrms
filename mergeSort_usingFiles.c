#include<stdio.h>
#include<stdlib.h>

void merge(int *array,int lower,int mid,int upper)
{
	int *left,*right,n1=mid-lower+1,n2=upper-mid,i,j,k=lower;
	left = (int *)malloc(sizeof(int)*n1);
	right = (int *)malloc(sizeof(int)*n2);
	for(i=0;i<n1;i++)
		left[i]=array[lower+i];
	for(i=0;i<n2;i++)
		right[i]=array[mid+1+i];
	i=0;j=0;
	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			array[k]=left[i];
			i++;k++;
		}
		else{
			array[k]=right[j];
			j++;k++;
		}
	}
	while(i<n1){
		array[k]=left[i];
		i++;k++;
	}
	while(j<n2){
		array[k]=right[j];
		j++;k++;
	}
}
void merge_sort(int *array,int lower,int upper)
{
	int mid;
	if(lower<upper){
		mid = (upper+lower)/2;
		merge_sort(array,lower,mid);
		merge_sort(array,mid+1,upper);
		merge(array,lower,mid,upper);
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
	merge_sort(array,0,n-2);
	output_file = fopen("output2.txt","w");
	printf("Sorting done please check the output file..");
	for(i=0;i<n-1;i++)
		fprintf(output_file,"%d ",array[i]);
	fclose(output_file);
}
