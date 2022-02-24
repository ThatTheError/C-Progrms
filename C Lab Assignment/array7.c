#include<stdio.h>   
int* Bubble_Sort(int[]);  
void main ()    
{    
    int arr[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
    int *p = Bubble_Sort(arr), i;  
    printf("printing sorted elements ...\n");  
    for(i=0;i<10;i++)  
    {  
        printf("%d\n",*(p+i));  
    }  
}    
int* Bubble_Sort(int a[]) //array a[] points to arr.   
{  
int i, j,temp;     
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j<10; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    return a;  
}  
