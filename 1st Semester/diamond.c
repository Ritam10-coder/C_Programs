#include<stdio.h>
int main()
{
	int i,j;
	int n =5;
	for(i=1;i<=(2*n)-1;i++)
	{
	  	for(j=1;j<=n;j++)
	  	{
	  		if(i<=n)
	  		{
	  			if(j<=i)
	  			{
	  				printf("%d ",j);
				}
				else
				{
					printf(" ");
				}
		    }
			else
			{
			   if(j<=n-(i-n))
				{
					printf("%d ",j);
				}
				else
				{
					printf(" ");
				}
				   	
			}		
		}
		printf("\n");
	}
}
