#include<stdio.h>
int main()
{
	char char1;
	printf("enter the input ");
	scanf("%c",&char1);
	printf("\n%d",char1);
	if((65<=char1&&char1<=90)||(97<=char1&&char1<=122))
	printf("\n char1 =%c is an alphabet",char1);
	else
	printf("a is not an alphabet");
}
