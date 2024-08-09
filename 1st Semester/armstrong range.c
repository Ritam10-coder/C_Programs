#include <stdio.h>
#include <math.h>
int main()
{
    int n, l, d, sum, i, end;
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("Armstrong number between 1 to %d are: \n", end);
    for(i=1; i<=end; i++)
    {
	   sum = 0;
       n = i;
       d = (int) log10(n) + 1;
       while(n > 0)
        {
           
            l = n % 10;
            sum = sum + ceil(pow(l, d));
            n = n / 10;
        }

        
        if(i == sum)
        {
            printf("%d ", i);
        }

    }

    return 0;
}
