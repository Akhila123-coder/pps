#include<stdio.h>
struct student
{
	char Name[20];
	int rno;
	struct DOB
	{
		int day;
		int month;
		int year;
    }sa,sb;
}sA,sB;
int main()
{
	printf("enter the student details");
	printf("\nname");
	scanf("%s",sA.Name);
	printf("rno:");
	scanf("%d",&sA.rno);
	printf("date");
	scanf("%d",&sA.sa.day);
	printf("month");
	scanf("%d",&sA.sa.month);
	printf("year");
	scanf("%d",&sA.sa.year);
	printf("name");
	scanf("%s",sB.Name);
	printf("rno:");
	scanf("%d",&sB.rno);
	printf("date");
	scanf("%d",&sB.sb.day);
	printf("month");
	scanf("%d",&sB.sb.month);
	printf("year");
	scanf("%d",&sB.sb.year);
	printf("rno Name   date of birth");
	printf("\n%d %s %d-%d-%d",sA.rno,sA.Name,sA.sa.day,sA.sa.month,sA.sa.year);
	printf("\n%d %s %d-%d-%d",sB.rno,sB.Name,sB.sb.day,sB.sb.month,sB.sb.year);
}
	
	
