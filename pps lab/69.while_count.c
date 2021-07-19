#include<stdio.h>
int main()
{
	int a,b,count;
	count=0;
	printf("enter the number ");
	scanf("%d",&a);
	while(a>=1)
	{
		b=a%10;
		count=count+1;
		a=a/10;
		
	}
	printf("number of digits=%d",count);
}

