#include<stdio.h>
#include<math.h>
int main()
{
	float mileage,fuel;
	int dis;
	printf("Enter the distance travelled in Km: ");
	scanf("%d",&dis);
	printf("\nEnter the fuel consumption in liters:");
	scanf("%f",&fuel);
	mileage = (float) dis/fuel;
	printf("\nThe average consumption is %0.2f",mileage);
	
	return 0 ;
	/* avg = mileage
	fuel consumption = total distance in km/fuel*/
}
