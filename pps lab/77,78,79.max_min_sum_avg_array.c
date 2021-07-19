#include<stdio.h>
int main()
{
	int A[4],max,i,min,sum;
	float avg;
	printf("enter the numbers  ");
	max=0;
	min=100000;
	for (i=0;i<4;i++)
	{
		scanf("%d",&A[i]);
		max =max<A[i]?A[i]:max;
		min=min>A[i]?A[i]:min;
		sum+=A[i];
	}
	avg=sum/4;
	printf("\nmax =%d",max);
	printf("\nmin =%d",min);
	printf("\nsum=%d",sum);
	printf("\navg=%f",avg);
}
