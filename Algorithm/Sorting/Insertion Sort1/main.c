// C program for insertion sort
#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertionSort(arr, n);
    printf("After Sorting, \n");
    display(arr, n);

    return 0;
}
