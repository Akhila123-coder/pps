#include<stdio.h>
int main()
{
	int a,b,c,d,max;
	printf("enter the numbers ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	((a>b&&a>c&&a>d)? max=a:max=0)||((b>a&&b>c&&b>d)? max=b:max=0)||((c>a&&c>b&&c>d)? max=c:max=d);
	printf("max=%d",max);
	
}
