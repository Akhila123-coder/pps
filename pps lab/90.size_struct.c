#include<stdio.h>
struct student
{
	int num;
	char c[15];
	float f;	
}s;
int main()
{
	int size;
	size=sizeof(s);
	printf("%d",size);
}
