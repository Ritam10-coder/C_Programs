#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="arijit";
	char t;
	int l;
	l=strlen(s);
	t=s[0];
	s[0]=s[l-1];
	s[l-1]=t;
	printf("original string : %s",s);
	return 0;
}

