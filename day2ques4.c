//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    int r, area, circum;
    printf("enter radius of circle");
    scanf("%d", &r);
    area = 3.14*r*r;
    circum = 2*3.14*r*r;
    printf("\n area of circle = %d", area);
    printf("circumference of cicle = %d", circum);
    return 0;
}
