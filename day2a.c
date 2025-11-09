//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("enter length of rectangle");
    scanf("%d", &l);
    printf("enter breadth of rectangle");
    scanf("d", &b);
    area=l*b;
    perimeter=2*(l=b);
    printf("\n Area of rectangle= %d",area);
    printf("\n Perimeter of rectangle= %d",perimeter);
    return 0;
}
