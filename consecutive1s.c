//length of the longest cosecutive 1's in binary Representation
#include<stdio.h>

int main()
{
    int count=0;
    int n=14;
    while(n!=0)
    {
        n=(n&(n<<1));
        count++;
    }
    printf("\nThe longest cosecutive 1s are : %d",count);
    return 0;
}