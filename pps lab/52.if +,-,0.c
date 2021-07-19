#include<stdio.h>
int main()
{
	int num;
	printf("enter the input ");
	scanf("%d",&num);
	if(num>0)
	printf("num=%d is positive",num);
	if(num<0)
	printf("num=%d is negative",num);
	if(num==0)
	printf("num=%d is zero",num);
}
