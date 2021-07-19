#include<stdio.h>
int main()
{
	int n,num,count=0,binary=0,rem,i=1;
	printf("enter the number= ");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		rem=n%2;
		n=n/2;
		binary=binary+i*rem;
		count+=1;
		i*=10;
    }
	printf("binary equivalent=%d no of bits=%d",binary,count);
}
