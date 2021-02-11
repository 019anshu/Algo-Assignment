// C program for implementation of Bubble sort
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d\n", arr[i]);
}
int main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("Before sorting,\n");
    display(arr,n);
    bubbleSort(arr, n);
    printf("After sorting, \n");
    display(arr, n);
    return 0;
}
