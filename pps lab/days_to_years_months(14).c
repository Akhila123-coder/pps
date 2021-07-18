#include<stdio.h>
int main()
{
	int days,months,years,d;
	printf("Enter the number of days ");
	scanf("%d",&d);
	years = d/365;
	months = (d-years*365)/30;
	days =(d-(years*365+months*30));
	printf("\n years=%d months=%d days=%d",years,months,days); 
}
