#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("ENTER THE NUMBER ");
	scanf("%d",&a);
	c=pow(a,3);
	b=(a*a*a);
	printf("\n cube using built in function=%d cube without using built in function=%d",c,b);
}
