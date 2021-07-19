#include<stdio.h>
int main()
{
	int n,m;
	printf("enter the number ");
	scanf("%d",&n);
	m=1;
	for(;m<=10;m+=1)
	{
		printf("\n%d x %d =%d",n,m,n*m);
	}
}
