#include<stdio.h>
#include<math.h>
int main()


{
	long b_salary;
	double da,hra;
	float da_p,hra_p,netsalary;
	printf("Enter the salary= ");
	scanf("%ld",&b_salary);
	printf("Enter the dapercent= ");
	scanf("%f",&da_p);
	printf("Enter the hrapercent= ");
	scanf("%f",&hra_p);
	da=(da_p/100)*b_salary;
	hra=(hra_p/100)*b_salary;
	netsalary=da+hra+b_salary;
	printf("the net salary =%lf hra=%f da=%f",netsalary,hra,da);
}
