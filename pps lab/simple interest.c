#include<stdio.h>
int main()
{
	int time;
	float principle,rate,SI;
	printf("\n Enter respective values: ");
	scanf("%f%f%d",&principle,&rate,&time);
	SI=(principle*rate*time)/100;
	printf("SI=%f",SI);
	return 0;
	
}
