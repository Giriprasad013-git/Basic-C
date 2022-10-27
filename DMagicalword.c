#include<stdio.h>
#include<stdlib.h>

int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	char str[]="AFREEN";
	int i,n,count1,count2,a,b;
	for(i=0;str[i]!='\0';i++)
	{
		a=str[i];
		b=str[i];
		count1=0;
		count2=0;
		while(!prime(a))
		{
			a++;
			count1++;
		}
		while(!prime(b))
		{
			b--;
			count2++;
		}
		if(count1>=count2)
		{
			printf("%c",b);
		}
		else if(count1<count2)
		{
			printf("%c",a);
		}
	}
}