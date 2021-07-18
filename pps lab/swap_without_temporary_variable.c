#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter four numbers a,b,c,d=    ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a=a+b;
	b=a-b;
	a=a-b;
	c=c*d;
	d=c/d;
	c=c/d;
	
	printf("\n after swapping a=%d b=%d c=%d d=%d",a,b,c,d);
	return 1;
}
