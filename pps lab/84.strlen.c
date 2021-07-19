#include<stdio.h>
#include<string.h>
int main()
{
	char word1[50];
	int ans;
	printf("enter the word=");
	gets(word1);
	ans=strlen(word1);
	printf("length of string=%d",ans);
}
