#include<stdio.h>
#include<math.h>
int main()
{
float side1,side2,side3,perimeter,area;
printf("Enter 3 sides of triangle:");
scanf("%f %f %f",&side1,&side2,&side3);
perimeter=(side1+side2+side3)/2;
area=sqrt(perimeter(perimeter-side1)*(perimeter-side2)*(perimeter-side3));
printf("\n Area=%.2f",area);
return 0;
}
