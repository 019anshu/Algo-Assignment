// C program for implementation of Quick Sort
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
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

    quickSort(arr,0, n);
    printf("After sorting, \n");
    display(arr, n);
    return 0;
}
