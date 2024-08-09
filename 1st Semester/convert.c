#include<stdio.h>
int main()
{
	float dis;
	float m,ft,i;
	printf("enter the distance:");
	scanf("%f",&dis);
	m=dis*1000;
	ft=dis*3281;
	i=dis*39370;
	printf("distance in meter:%f\n",m);
	printf("distance in feet:%f\n",ft);
	printf("distance in inches:%f\n",i);
	return 0;
}
