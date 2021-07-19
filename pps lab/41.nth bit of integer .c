#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,count=0,binary=0,rem,i=1,pos,value;
	printf("enter the number= ");
	scanf("%d",&num);
	n=num;
	printf("enter the position");
	scanf("%d",&pos);
	while(n>0)
	{
		rem=n%2;
		n=n/2;
		binary=binary+i*rem;
		count+=1;
		i*=10;
    }
	printf("binary equivalent=%d",binary);
	value=((num>>count-pos)&1);
	if(value==1)
	printf("\nposition %d of integer is set to 1",pos);
	else
	printf("\nposition %d of integer is 0",pos);
}
