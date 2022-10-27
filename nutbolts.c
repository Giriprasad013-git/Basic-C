#include<stdio.h>

void printArray(char s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
    printf("\n\n");
}
void partition(char s[],int low,int high,char pi)
{
    int i=low;
    int temp1,temp2;
}

void quickSort(char nuts[],char bolts[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(nuts,low,high,bolts[high]);
        partition(bolts,low,high,nuts[pi]);

        quickSort(nuts,bolts,low,pi-1);

        quickSort(nuts,bolts,pi+1,high);
    }
}
int main()
{
    char nuts[]={'4','2','1','6','3','5'};
    char bolts[]={'2','6','4','3','5','1'};

    quickSort(nuts,bolts,0,5);

    printf("\nAfter matching the nuts and bolts\n");
    printArray(nuts,6);
    printArray(bolts,6);
}