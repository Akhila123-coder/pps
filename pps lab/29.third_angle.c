#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two angles ");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("\n Third angle=%d",c);
}
