#include<stdio.h>
int main()
{
	float cel,fh;
	printf("enter the temperature in celcius :");
	scanf("%f",&cel);
	fh=(cel * 9 / 5) + 32;
	printf("temperature in fahrenheit : %.2f",fh);
	return 0;
}
