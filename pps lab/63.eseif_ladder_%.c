#include<stdio.h>
int main()
{
	int pps,m,phy;
    float p,total;
	printf("\n enter marks scored in pps: ");
	scanf("%d",&pps);
	printf("\n enter marks scored in maths: ");
	scanf("%d",&m);
	printf("\n enter marks scored in physics: ");
	scanf("%d",&phy);
	total =pps+m+phy;
	p=(total/300)*100;
	if (p>=90)
	printf("\n percentage=%f GRADE A",p);
	else if (p>=80&&p<90)
	printf("\n percentage=%f GRADE B",p);
	else if (p>=70&&p<80)
	printf("\n percentage=%f GRADE C",p);
	else if(p>=60&&p<70)
	printf("\n percentage=%f GRADE D",p);
	else if(p>=40&&p<60)
	printf("\n percentage=%f GRADE E",p);
	else
	printf("\n  percentage=%f GRADE F",p);
}
