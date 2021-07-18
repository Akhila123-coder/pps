#include<stdio.h>
#include<math.h>
int main()
{
	float cm,m,km;
	printf("\nEnter the integer:");
	scanf("%f",&cm);
	m = cm/100.0;
	km = cm/100000;
	printf("\nlength in meter = %f",m);
	printf("\nlength in km = %f",km);
	
	return 0 ;
