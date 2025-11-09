//Q37: Write a program to find the LCM of two numbers.
#include<stdio.h>
int main()
{
	int a,b, i,hcf,lcm;
	printf("Enter First Number");
	scanf("%d",&a);
	
	printf("Enter Second Number");
	scanf("%d",&b);
	
	for (i = 1; i <= a && i <= b; i++) 
	{
        if (a % i == 0 && b % i == 0) 
		{
            hcf = i;
        }
    }
	
	lcm = (a*b)/hcf;
	printf("LCM IS %d",lcm);
	
	return 0;
}
