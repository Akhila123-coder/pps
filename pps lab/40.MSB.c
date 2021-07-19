#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter the number= ");
	scanf("%d",&a);
	b=sizeof(a);
	if(a&(1<<(8*b-1)))
	printf("MSB is 1");
	else
	printf("MSB is 0"); 
}


