#include<stdio.h>
int main()
{
    int i, j, num,p;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("All Prime Factors of %d are: \n", num);
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            p = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    p = 0;
                    break;
                }
            }
            if(p==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}

