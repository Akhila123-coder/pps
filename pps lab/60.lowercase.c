#include<stdio.h>
int main()
{
	char c;
	printf("enter the value ");
	scanf("%c",&c);
	printf("%d",c);
	if(65<=c&&c<=90)
	printf("letter is uppercase");
	else
	printf("letter is lowercase ");
}
