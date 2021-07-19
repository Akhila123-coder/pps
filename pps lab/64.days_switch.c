#include<stdio.h>
int main()
{
	int a;
	printf("enter the number= ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("1-MONDAY");
		break;
		case 2:printf("2-TUESDAY");
		break;
		case 3:printf("3-WEDNESDAY");
		break;
		case 4:printf("4-THURSDAY");
		break;
		case 5:printf("5-FRIDAY");
		break;
		case 6:printf("6-SATURDAY");
		break;
		case 7:printf("7-SUNDAY");
		break;
	}
}
