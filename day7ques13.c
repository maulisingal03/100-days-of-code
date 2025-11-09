//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year %d",year);
	scanf("%d",&year);
	
	if (year%4==0)
	{
		if (year%100==0)
			if (year%400==0)
			printf("It is Leap Year");
			else
			printf("It is not a Leap Year");
		else 
			printf("It is a Leap Year");
}
	
	return 0;
}
