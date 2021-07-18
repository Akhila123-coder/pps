#include<stdio.h>
int main()
{
	float area,perimeter,pi,r;
	pi=3.14;
	printf("\n Enetr the value of r: ");
	scanf("%f",&r);
	area=pi*r*r;
	perimeter=2*pi*r;
	printf("\n perimeter=%f,area=%f",perimeter,area);
     return 0;	
}
