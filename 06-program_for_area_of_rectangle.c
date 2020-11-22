#include<stdio.h>
int main()
{
float length,breath,area;                  // declaring variables for storing values
printf("Enter length for rectangle");   
scanf("%f",&length);                      // taking value of length ,using & is neccesary while taking value
printf("Enter breath for rectangle");
scanf("%f",&breath);
area= length * breath;                   // multiplying values of length and breath to get area of rectangle
printf("Area of rectangle is %f",area);    // printing area calculated from values taken from user , this does not require any & as if we will do & it will print address of area (where it is stored)
return 0;
}
