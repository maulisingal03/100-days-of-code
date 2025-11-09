//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n %d",n);
    scanf("%d",&n);

    int i, sum=0;
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
       
    }
    printf("%d",sum);
    return 0;
}
