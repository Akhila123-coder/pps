#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers   ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a=%d is maximum",a);
	else
	//printf("b=%d is maximum",b);
	if(b>a&&b>c)
	printf("b=%d is maximum",b);
	else
	printf("c=%d is maximum",c);
}
