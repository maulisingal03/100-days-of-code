//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main()
{
	char x;
	printf("Enter a Single Character %c",x);
	scanf("%c",&x);
	
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
	printf("Vowel");
	else
	printf("consonant");
	
	return 0;
}
