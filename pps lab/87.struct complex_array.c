#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
	char sign;
};
int main()
{
    struct complex c[10];
    int i,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the real part ");
        scanf("%d",&c[i].real);
    	printf("enter the imaginary part");
    	scanf("%d",&c[i].imaginary);
    }
    printf("\nComplex numbers are ");
    for(i=0;i<n;i++)
    {
    	if (c[i].imaginary>0)
    	c[i].sign='+';
    	else
    	{
    	c[i].sign='-';
    	c[i].imaginary=-1*c[i].imaginary;
        }
    printf("\n%d%ci%d",c[i].real,c[i].sign,c[i].imaginary);
    }
}
