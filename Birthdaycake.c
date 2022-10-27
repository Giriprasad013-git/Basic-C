#include<stdio.h>
int main()
{
    int n,i,max=0,k=0;
    printf("\nEnter the number of candels on the cake\n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the height of the candels\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            k++;
        }
    }
    printf("\nThe number of candels can be blown out: %d",k);
}