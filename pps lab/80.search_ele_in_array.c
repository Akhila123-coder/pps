#include<stdio.h>
int main()
{
	int A[6],num,i;
	printf("enter the numbers  ");
	for(i=0;i<6;i++)
	scanf("%d",&A[i]);
	printf("enter the number ");
	scanf("%d",&num);
	for(i=0;i<6;i++)
	{
	    if (num==A[i])
	    {
	    	printf("num=%d is present in the array", num);
		}
    }
}

