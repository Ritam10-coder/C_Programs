#include<stdio.h>
int main() 
{
    int n = 5;
	int i,j;
	for(i=1;i<=(2*n)-1;i++)
	{
       for (j = 1; j <=n; j++) 
		{
           if(i<=n)
           {
           	 if(j>(n-i))
           	 {
           	 	printf("%d",j);
			 }
			 else
			 {
			   	printf(" ");	
			 }
		   }
		    else
		    {
		    	if(j>(i-n))
		    	{
		    		printf("%d",j);
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

    
