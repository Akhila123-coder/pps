#include<stdio.h>
int main()
{
	char char1;
	printf("enter the input ");
	scanf("%c",&char1);
	printf("\n%d",char1);
	(65<=char1&&char1<=90||97<=char1&&char1<=122)? printf("\n char1 =%c is an alphabet",char1):printf("a is not an alphabet");
}
