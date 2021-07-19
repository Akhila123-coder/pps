#include<stdio.h>
struct employee
{
	int eno;
	char name[50];
	int salary;
}e;
int main()
{
    printf("enter the employee eno no= ");
    scanf("%d",&e.eno);
    printf("enter the employee name= ");
    scanf("%s",&e.name);
    printf("enter the employee salary= ");
    scanf("%d",&e.salary);
    printf("eno=%d name=%s salary=%d",e.eno,e.name,e.salary);
}
