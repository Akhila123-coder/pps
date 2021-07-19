#include<stdio.h>
#include<math.h>
int main()
{
	int a,c,s,p_4;
	float sr,b,floor_,ceil_;
	printf("enter the number ");
	scanf("%d",&a);
	printf("enter the number ");
	scanf("%d",&b);
	c=pow(a,3);
	s=pow(a,2);
	p_4=pow(a,4);
	sr=sqrt(a);
	floor_=floor(b);
	ceil_=ceil(b);
	
	printf("\n cube=%d square=%d sqrt=%f floor=%f ceil=%f powerfour=%d",c,s,sr,floor_,ceil_,p_4);
}
