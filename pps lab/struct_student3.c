#include<stdio.h>
struct student
{
	int rno;
	char Name[50];
	int marks[3];
}s,s1;
int main()
{
	printf("Name:");
	scanf("%s",s.Name);
	printf("RNO");
	scanf("%d",&s.rno);
	printf("M1");
	scanf("%d",&s.marks[0]);
	printf("M2");
	scanf("%d",&s.marks[1]);
	printf("M3");
	scanf("%d",&s.marks[2]);
	printf("Name:");
	scanf("\n%s",s1.Name);
	printf("RNO");
	scanf("%d",&s1.rno);
	printf("M1");
	scanf("%d",&s1.marks[0]);
	printf("M2");
	scanf("%d",&s1.marks[1]);
	printf("M3");
	scanf("%d",&s1.marks[2]);
	printf("The details of students are:");
	printf("\n----------------------------");
	printf("\nName RNO M1 M2 M3 ");
	printf("\n%s %d %d %d %d",s.Name,s.rno,s.marks[0],s.marks[1],s.marks[2]);
	printf("\n%s %d %d %d %d",s1.Name,s1.rno,s1.marks[0],s1.marks[1],s1.marks[2]);
	
	
}

