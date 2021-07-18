#include<stdio.h>
int main()
{
	int hours,seconds,minutes,s;
	printf("enter the time in seconds ");
	scanf("%d",&s);
	hours=s/3600;
	minutes =(s-hours*3600)/60;
	seconds = (s-(hours*3600+minutes*60));
	printf("time calculated =%d:%d:%d",hours,minutes,seconds);
}
