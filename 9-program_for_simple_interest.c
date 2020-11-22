#include<stdio.h>
int main()
{
float principle,rate,time,simple_interest;
printf("Enter values of Principle amount, Rate, Time to calculate Simple Interest:");
scanf("%f %f %f",&principle,&rate,&time);
simple_interest=(principle * rate * time)/100;
printf("\n Simple Interest=%.2f",simple_interest); // by adding .2f float value will be shown till 2 decimal places
return 0;
}
