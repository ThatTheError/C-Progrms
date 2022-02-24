#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int maxx(int *array, int size, int n) {
  int left = size * 2, right = left + 1;
  int index = size;
  if (left < n) {
    // root is greater
    if (array[size] > array[left] && array[size] > array[right]) {
      //printf("root is grater");
      index = size;
    }
    else if (array[left] > array[right]) {
      //printf("left is grater");
      index = left;
    }
    else {
      //printf("right is grater");
      index = right;
    }
  } else if (left == n) {
    //printf("only left child");
    if (array[size] > array[left]) {
      //printf("root is grater");
      index = size;
    }
    else {
      //printf("only left is grater");
      index = left;
    }
  }
  return index;
}
void heapify(int *array, int size, int n) {
  int max_ind, temp;
  if (size >= 1) {
    //printf("current node = %d\n", size);
    max_ind = maxx(array, size, n);
    //printf("max ind = %d\n", max_ind);
    //getchar();
    if (max_ind <= n) {
      temp = array[size];
      array[size] = array[max_ind];
      array[max_ind] = temp;
      heapify(array, size / 2, n);
    }
  }
}
void heapSort(int *array, int n) {
  int temp, size = n, i;
  // heap build
  for (i = size / 2; i > 0; i--) 
  	heapify(array, i, size);
  while (size >= 1) {
    //printf("current size%d\n", size);
    temp = array[size];
    array[size] = array[1];
    array[1] = temp;
    size--;
    heapify(array, size / 2, size);
  }
}
void main() {
	int l,u;
	int i,n,*array;
	printf("Enter size of the array");
	scanf("%d",&n);
	array = (int *)malloc(sizeof(int)*(n+1));
	//printf("Enter the elements of the array");
	//for(i=1;i<=n;i++)
	//	scanf("%d",&array[i]);
  //int i, n, array[] = {0,8,7,3,6,1,2,5,9};
  printf("Enter the lower limit\n");
	scanf("%d",&l);
	printf("Enter the upper limit\n");
	scanf("%d",&u);
	srand(time(NULL));
	for(i=0;i<n;i++){
		array[i] = rand()%(u-l+1)+l;
		printf("%d ",array[i]);
	}
  heapSort(array, n);
  printf("After Sorting..");
  for (i = 1; i <= n; i++) 
  	printf("%d ", array[i]);
}
