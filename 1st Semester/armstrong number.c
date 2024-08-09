#include<stdio.h>
int main()
{
	int n,p,s=0,temp;
	printf("enter a number :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		p=n%10;
		s=s+(p*p*p);
		n=n/10;
    }
	if(temp==s)
	{
		printf("It  is armstrong number ");
	}
	else
	{
		printf("It is not an armstrong number ",n);
	}
	return 0;
}

