#include<stdio.h>
#include<string.h>
int main()
{
	char word1[50],word2[20],ans;
	printf("enter the word1= ");
	gets(word1);
	printf("enter the word2= ");
	gets(word2);
	strcat(word1,word2);
	printf("word1 after concatenation=%s",word1);
}
