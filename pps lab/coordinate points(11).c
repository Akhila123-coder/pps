#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float dist;
	printf("enter the first coordinate point");
	scanf("%d%d",&a,&b);
	printf("Enter the coordinate points ");
	scanf("%d%d",&c,&d);
	dist=sqrt(((d-b)*(d-b))+((c-a)*(c-a)));
	printf("distance between the coordinate points =%f",dist);	
}
