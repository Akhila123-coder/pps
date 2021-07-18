#include<stdio.h>
struct student
{
	int roll;
	char Name[30];
	float marks;
	
}s;
int main()
{
	struct student s1;
	printf("\n Enter the Name:");
	scanf("%s",&s.Name);
	printf("\n Enter the roll:");
	scanf("%d",&s.roll);
	printf("\n Enter the marks:");
	scanf("%f",&s.marks);
	printf(" \n complete details %d %f %s",s.roll,s.marks,s.Name);
}
