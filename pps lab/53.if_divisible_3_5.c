#include<stdio.h>
int main()
{
	int num;
	printf("enter the input ");
	scanf("%d",&num);
	if(num%3==0&&num%5==0)
	printf("num=%d is divisible by both 3 and 5",num);
}
