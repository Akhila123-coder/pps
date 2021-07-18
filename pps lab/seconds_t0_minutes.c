#include<stdio.h>
int main()
{
	int hours,seconds,minutes,s;
	printf("enter the time in seconds ");
	scanf("%d",&s);
	hours=s/3600;
	minutes =s/60;
	seconds = s;
	printf("time in hours=%d time in minutes=%d time in seconds=%d",hours,minutes,seconds);
}
