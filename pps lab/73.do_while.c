#include<stdio.h>
int main()
{
	int n;
	n=200;
	do
	{
		if(n%2==0)
		printf("\t%d",n);
		n+=1;
	}
	while(n<=300);
}
