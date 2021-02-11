#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int a[], int n)
{
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
          if (a[j] < a[min])
            min = j;
        swap(&a[min], &a[i]);
    }
}
void display(int a[], int size)
{
    printf("The elements in the array:\n");
    for (int i=0; i < size; i++)
        printf("%d\n", a[i]);
}

int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array to be sorted:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    display(a,n);
    selectionSort(a,n);
    printf("After Sorting,");
    display(a, n);
    return 0;
}
