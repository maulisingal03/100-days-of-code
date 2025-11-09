//Q36: Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main()
{
	int a,b, i, hcf;
	printf("Enter First Number:");
	scanf("%d",&a);
	
	printf("Enter Second Number:");
	scanf("%d",&b);
	
	for (i = 1; i <= a && i <= b; i++) 
	{
        if (a % i == 0 && b % i == 0) 
		{
            hcf = i;
        }
    }

    printf("HCF is: %d\n", hcf);
	return 0;
}
