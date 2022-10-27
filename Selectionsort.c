
#include <stdio.h>

int main()
{
   int arr[]={23,43,323,434,54,34,23,45,76,6};
   int n=*(&arr+1)-arr;
   int swap,pos,j,i;
   for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++){
            if(arr[pos]>arr[j]){
                pos=j;
            }
        }
        if(arr[pos]!=arr[i]){
            swap=arr[pos];
            arr[pos]=arr[i];
            arr[i]=swap;
        }
    }
    i=0;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}