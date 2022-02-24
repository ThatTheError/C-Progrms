#include<stdio.h>
#include<stdlib.h>

typedef struct item {
	int value, weight;
}item;
int cmp(struct item a, struct item b)
{
	double r1 = (double)a.value / (double)a.weight;
	double r2 = (double)b.value / (double)b.weight;
	return r1 > r2;
}
void sort_items_by_ratio(struct item arr[], int n) {
    int i,j;
    struct item key;
    for (i = 1; i<n;i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && cmp(arr[j],key) ) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
double fractional_knapsack(int W, struct item arr[], int n)
{
    int i;
	int cur_weight = 0;
	double final_value = 0.0;
	sort_items_by_ratio(arr, n);
	for (i = 0; i < n; i++) {
		if (cur_weight + arr[i].weight <= W) {
			cur_weight += arr[i].weight;
			final_value += arr[i].value;
		} else {
			int remain = W - cur_weight;
			final_value += arr[i].value	* ((double)remain / (double)arr[i].weight);
			break;
		}
	}
	return final_value;
}
int main()
{
	int i,W = 500,n,lower,upper;
	struct item *arr;
	printf("Enter the size of the n\n");
	scanf("%d",&n);
	printf("Enter the lower limit\n");
	scanf("%d",&lower);
	printf("Enter the upper limit\n");
	scanf("%d",&upper);
	arr = (struct item *)calloc(sizeof(struct item),n);
	for(i=0;i<n;i++)
	{
		arr[i].value = rand()%(upper-lower+1)+lower;
		arr[i].weight = rand()%(upper-lower+1)+lower;
		printf("%d Value-%d Weight-%d\n",i,arr[i].value,arr[i].weight);
	}
	printf("Total Profit = %lf",fractional_knapsack(W, arr, n));
	return 0;
}
