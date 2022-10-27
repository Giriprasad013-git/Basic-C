#include<stdio.h>

void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1); 
 
    for (int j = low; j <= high - 1; j++)
    {
       if (arr[j] < pivot)
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size,int k)
{
    printf("\nThe k largest values are: ");
    for(int j=size-1;j>=size-k;j--)
    {
        printf("%d, ",arr[j]);
    }
}
 
int main()
{
    int arr[] = {10, 7, 8, 9,41, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    int k;
    printf("\nEnter the k value :\n");
    scanf("%d",&k);
    printArray(arr, n,k);
    return 0;
}