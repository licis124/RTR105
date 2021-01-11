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
int mode(int arr[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;

      for (j = 0; j < n; ++j) {
         if (arr[j] == arr[i])
         ++count;
      }

      if (count > maxCount) {
         maxCount = count;
         maxValue = arr[i];
      }
   }

   return maxValue;
}

// Driver program to test above functions 
int main() 
{  int i, max, min, N,average;
{  int i, max, min, N;
int * arr;
float sum, mediana ;
float sum, mediana,average ;
    printf("Enter size of the array: ");
    scanf("%d", &N);
    arr=(int*)malloc (i);
 float sum, mediana ;
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
int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, N); 
    printf("Sorted array: \n"); 
    printArray(arr, N); 
    if(N%2)
        mediana= arr[N/2];
    else
        mediana= (arr[N/2]+arr[N/2-1])/2;
    average = sum/N;
    max = arr[0];
    min = arr[0];
     printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("Average = %d\n", average);
    printf("Average = %.2f\n", average);
    printf("Mediana = %.3f\n", mediana);
    printf("Mode = %d ", mode(arr,N));
    return 0; 
}
