#include<stdio.h>
int main()
{
	char ch;
	printf("enter an alphabet:");
	scanf("%c",&ch);
	ch=tolower(ch);
	if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
	{
		printf("%c is a vowel",ch);
	}
	else
	{
		printf("%c is a consonent",ch);
	}
	return 0;
}
	
