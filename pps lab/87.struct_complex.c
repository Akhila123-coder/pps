#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
	char m;
	int img;
}c;
int main()
{
	printf("enter the real part ");
	scanf("%d",&c.real);
	printf("enter the imaginary part ");
	scanf("%d",&c.imaginary);
	if (c.imaginary>0)
	{
	c.m='+';
	c.img=c.imaginary;
   }
	else
	{
	c.m='-';
	c.img=-1*c.imaginary;
    }
	printf("the complex number is =%d%ci%d",c.real,c.m,c.img);
	
}
