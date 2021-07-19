#include<stdio.h>
#include<string.h>
int main()
{
	int A[50][50],r,c,i,j;
	i=0;
	j=0;
	printf("enter the number of rows ");
	scanf("%d",&r);
	printf("enter the number of columns" );
	scanf("%d",&c);
	printf("enter the numbers ");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&A[i][j]);
    }
    for(i=0;i<r;i++)
    {
		for(j=0;j<c;j++)
		printf("%4d",A[i][j]);
		printf("\n");
	}
	

}

