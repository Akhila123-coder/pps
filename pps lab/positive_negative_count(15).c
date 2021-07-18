#include<stdio.h>
int main()
{
	int a,b,c,d,e,pcount,ncount;
	pcount = 0;
	ncount=0;
	printf("ENTER 5 INTEGERS ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a>0)
	pcount =pcount+1;
	else
	ncount=ncount+1;
	if (b>0)
	pcount =pcount+1;
	else
	ncount=ncount+1;
	if (c>0)
	pcount =pcount+1;
	else
	ncount=ncount+1;
	if (d>0)
	pcount =pcount+1;
	else
	ncount=ncount+1;
	if (e>0)
	pcount=pcount+1;
	else
	ncount=ncount+1 ;
	printf("\n positive numbers count = %d negative number of count=%d",pcount,ncount);
    }

