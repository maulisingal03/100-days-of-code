//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a Number %d",num);
	scanf("%d",&num);
	
	if (num%2==0)
	printf("Number is EVEN");
	
	else 
	printf("Number is ODD");
	
	return 0;
}
