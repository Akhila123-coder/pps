#include<stdio.h>
int main()
{
	char a;
	printf("enter the value ");
	scanf("%c",&a);
	if(65<=a<=90||97<=a<=122)
	printf("given vlaue is alphabet ascii value=%d",a);
}
