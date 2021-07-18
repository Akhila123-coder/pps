#include<stdio.h>
int main()
{
	float hours,amount,salary;
	int employeeid;
	printf("Enter the employee id:");
	scanf("%d",&employeeid);
	printf("\nEnter the no.of hours worked in the month:");
	scanf("%f",&hours);
	printf("\nThe amount recived per hour:");
	scanf("%f",&amount);
	salary = (amount*hours);
	printf("\nEmployee's ID is %d.", employeeid);
	printf("\nThe salary recived in a months is : %0.2f",salary);
	return 0;
	
	
	
}

