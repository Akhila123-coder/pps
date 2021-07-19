#include<stdio.h>
#include<math.h>
int main()
{
	int a,count,i,s,m,n,rem,rev;
	printf("enter the number ");
	scanf("%d",&a);
	count=0;
	m=a;
	n=a;
	while(m>=1)
	{
		s=m%10;
		count+=1;
		m=m/10;
	}
	rev=0;
	i=count-1;
	while(n>=1)
	{
		rem=n%10;
		rev=rev+rem*pow(10,i);
		n=n/10;
		i=i-1;
	}
	printf("reverse=%d",rev);
	if(a==rev)
	{
	printf("\ngiven num is a palindrome");
    } 
	else
	{printf("\ngiven num is not a palindrome");
    }
}


