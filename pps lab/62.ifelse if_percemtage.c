#include<stdio.h>
int main()
{
	int p;
	printf("enter your percentage ");
	scanf("%d",&p);
	if (p<40)
	printf("fail");
	else if(p>=40&&p<=60)
	printf("second class");
	else if(p>60&&p<=70)
	printf("first class");
	else
	printf("distinction");
}
