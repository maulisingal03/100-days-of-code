//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
   int a,b,c;
  printf("enter a");
  scanf("%d", &a);
  printf("enter b");
  scanf("%d", &b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n value oof a and b after swaping %d , %d",a,b);
  return 0;
}
