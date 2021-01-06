// C program for implementation of Bubble sort 
#include <stdio.h> 
#include <stdlib.h>  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// Driver program to test above functions 
int main() 
{  int i, max, min, N,average;
int * arr;
float sum, mediana ;
    printf("Enter size of the array: ");
    scanf("%d", &N);
    arr=(int*)malloc (i);
    if(arr==NULL) exit(1);
    printf("Size or array :%lu\n",sizeof(arr)/sizeof(arr[0]) );
    printf("Enter elements in the array: \n");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
         sum += arr[i];
    }
    if(N%2)
        mediana= arr[N/2];
    else
        mediana= (arr[N/2]+arr[N/2-1])/2;
    average = sum/N;
    max = arr[0];
    min = arr[0];

    for(i=1; i<N; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
int n = sizeof(arr)/sizeof(arr[0]); 
     printf("Before sorted array: \n"); 
    printArray(arr, N);
    bubbleSort(arr, N); 
    printf("Sorted array: \n"); 
    printArray(arr, N); 
     printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("Average = %d\n", average);
    return 0; 
