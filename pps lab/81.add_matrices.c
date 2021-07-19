#include<stdio.h>
#include<string.h>
int main()
{
	int A[50][50],B[50][50],r1,c1,i,j,r2,c2,a;
	i=0,j=0;
	printf("enter the number of rows ");
	scanf("%d",&r1);
	printf("enter the number of columns" );
	scanf("%d",&c1);
	printf("enter the numbers ");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&A[i][j]);
    }
    for(i=0;i<r1;i++)
    {
		for(j=0;j<c1;j++)
		printf("%4d",A[i][j]);
		printf("\n");
	}
	i=0;
	j=0;
	printf("enter the number of rows of other matrix ");
	scanf("%d",&r2);
	printf("enter the number of columns of other matrix" );
	scanf("%d",&c2);
	printf("enter the numbers ");
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		scanf("%d",&B[i][j]);
    }
    for(i=0;i<r2;i++)
    {
		for(j=0;j<c2;j++)
		printf("%4d",B[i][j]);
		printf("\n");
	}
	if (r1!=r2 || c1!=c2)
	{
	printf("Given matrices cannot be added");
	}
	else
	{
		i=0;j=0;
	    printf("\n");
        for(i=0;i<r1;i++)
        {
    	    for(j=0;j<c1;j++)
    	    printf("%4d",A[i][j]+B[i][j]);
    	    printf("\n");
	    }
	}
}

