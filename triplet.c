#include<stdio.h>


int main()
{
    int a[]={12,3,4,1,6,9};
    int sum=24;
    int a_size=sizeof(a)/sizeof(0);
    for(int i=0;i<a_size-2;i++){
        for(int j=i+1;j<a_size-1;j++){
            for(int k=j+1;k<a_size;k++){
                if(a[i]+a[j]+a[k]==sum){
                    printf("\nThe triplet is : %d, %d, %d\n",a[i],a[j],a[k]);
                }
            }
        }
    }
}