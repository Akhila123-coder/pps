#include<stdio.h>
int main()
{
	int n,A[10],d,i;
    printf("enter the size of array ");
   	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	printf("%4d",A[i]);
	printf("\nenter the position u want to delete");      
	scanf("%d",&d);   
	for(i=d;i<=n;i++) 
	{                
	A[i]=A[i+1];
    }
	printf("array after deleting the element ");
	for(i=0;i<n-1;i++)
	printf("%4d",A[i]);
}
