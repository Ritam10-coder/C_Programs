#include <stdio.h>
int main() 
{
    int i,n1, n2, l;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    int max = (n1 > n2) ? n1 : n2;
    while (1) 
	{
        if (max % n1 == 0 && max % n2 == 0) 
		{
            l = max;
            break;
        }
        max++;
    }
    printf("The LCM of %d and %d is %d\n", n1, n2, l);
    return 0;
}

