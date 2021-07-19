#include<stdio.h>
int main()
{
	int a,b;
	printf("enter num");
	scanf("%d",&a);
	printf("enter other num");
	scanf("%d",&b);
	(a>b)?printf("max=%d",a):printf("max=%d",b);
}
