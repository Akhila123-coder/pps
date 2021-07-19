#include<stdio.h>
#include<string.h>
int main()
{
	char name[50],appendf[50]="Mrs.",appendm[50]="Mr.",gender,f,m;
	printf("enter the name: ");
	scanf("%s",name);
	printf("enter the gender: ");
	scanf("\n%c",&gender);
	(gender=='f'||gender=='F')?printf(strcat(appendf,name)):printf(strcat(appendm,name));
}
	
