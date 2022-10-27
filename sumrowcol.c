//the out put is an integer value that denotes 
//the sum of ath row and bth column
//3
//3
//1 3 5
//2 6 9
//3 6 9
//0
//2
#include<stdio.h>
int main()
{
    int a=3;
    int b=3;
    int s[3][3]={1,3,5,2,6,9,3,6,9};
    int c=0;
    int d=2;
    int sum1=0,sum2=0,sum;
    for(int i=0;i<a;i++)
    {
        sum1=sum1+s[c][i];
        sum2=sum2+s[i][d];
    }
    sum=sum1+sum2-s[c][d];
    printf("\nThe sum value is : %d",sum);
}