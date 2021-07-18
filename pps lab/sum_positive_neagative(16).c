#include<stdio.h>
int main()
{
	int a,b,c,d,e,psum,nsum;
	psum = 0;
	nsum=0;
	printf("ENTER 5 INTEGERS ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a>0)
	psum =psum+a;
	else
	nsum=nsum+a;
	if (b>0)
	psum =psum+b;
	else
	nsum=nsum+b;
	if (c>0)
	psum =psum+c;
	else
	nsum=nsum+c;
	if (d>0)
	psum =psum+d;
	else
	nsum=nsum+d;
	if (e>0)
	psum=psum+e;
	else
	nsum=nsum+e ;
	printf("\n positive numbers sum = %d negative numbers sum=%d",psum,nsum);
    }
© 2021 GitHub, Inc.
