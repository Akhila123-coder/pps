/*to calculate total weight and total cost*/
#include<stdio.h>
int main()
{
	float wt,cost,n,tw,tc;    
	/* tc = total cost,tw = total weight*/
	printf("Enter items weight: ");
	scanf("%f",&wt);
	printf("Enter the items cost: ");
	scanf("%f",&cost);
	printf("Enter the number of units purchased: ");
	scanf("%f",&n);
	tw = n*wt ;
	tc = n*cost ;
	
	printf("\nThe total weight of the given items are = %0.2f.",tw);
	printf("\nTotal cost = Rs %0.2f ",tc);
	return 0;
	
	
}
