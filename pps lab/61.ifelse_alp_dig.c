#include<stdio.h>
int main()
{
	char char1;
	printf("enter the input ");
	scanf("%c",&char1);
	if((65<=char1&&char1<=90)||(97<=char1&&char1<=122))
	printf("\n char1 =%c is an alphabet",char1);
	else
	printf("char1=%d is not an alphabet",char1);
	if(49<=char1&&char1<=57)
	printf("\n num=%d is a digit",char1);
	else
	printf("\n num=%d is not a digit",char1);
}
