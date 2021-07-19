#include<stdio.h>
int main()
{
	int n,a;
	a=1;
	printf("Enter the limit ");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("\t%d",a);
		a+=1;
	}
}
