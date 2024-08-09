#include<stdio.h>
int r_sum(int n)
{
	if(n<=1)
	return n;
	return n+r_sum(n-1);
}
int main()
{
	int n=20;
	printf("Sum of 20 natural numbers:%d",r_sum(n));
	return 0;
}
