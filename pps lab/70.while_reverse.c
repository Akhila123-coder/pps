#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number ");
	scanf("%d",&a);
	printf("reverse of number is ");
	while(a>=1)
	{
		b=a%10;
		printf("%d",b);
		a=a/10;
		
	}
}
