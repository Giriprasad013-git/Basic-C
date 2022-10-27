#include<stdio.h>
void xor(int x,int y)
{
    int result=((x&~y)|(~x&y));
    printf("\nXOR: (%d ^ %d): %d\n",x,y,result);
}
int main()
{
    xor(4,5);
    xor(1,2);
    xor(3,5);
    return 0;
}
