#include<stdio.h>
#include<string.h>
int main()
{
	char word1[50],word2[20];
	int ans;
	printf("enter the word1= ");
	gets(word1);
	printf("enter the word2= ");
	gets(word2);
	ans=strcmp(word1,word2);
	printf("result after comparing=%d",ans);
}
	
