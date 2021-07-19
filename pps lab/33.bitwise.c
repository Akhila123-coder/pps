#include<stdio.h>
int main()
{
	int a,b,And,i_or,x_or,l1,l2,r1,r2,not1,not2;
	printf("\n Enter the two numbers " );
	scanf("%d%d",&a,&b);
	And=a&b;
	i_or=a|b;
	x_or=a^b;
	r1=a>>1;
	r2=b>>1;
	l1=a<<1;
    l2=b<<1;
    not1=~a;
    not2=~b;
    printf("\n and=%d i_or=%d x_or=%d r1=%d r2=%d l1=%d l2=%d not1=%d not2=%d",And,i_or,x_or,r1,r2,l2,l2,not1,not2);
}
