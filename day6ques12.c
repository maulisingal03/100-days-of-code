//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a Number %d",num);
	scanf("%d",&num);
	
	if (num>=0)
	{
		if (num==0)
			printf("Number is ZERO");
		else 
			printf("Number is Positive");
}
	else
		printf("Number is Negative");
	
	return 0;
}
