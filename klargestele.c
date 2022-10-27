#include<stdio.h>

int largest(int a[],int n)
{
    int max = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int a[]={40,3,56,22,67,7};
    int n=sizeof(a)/sizeof(a[0]);
    printf("\nThe three largest elements in the array are: %d",largest(a,n));
    return 0;
}