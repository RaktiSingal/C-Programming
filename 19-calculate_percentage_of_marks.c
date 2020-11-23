#include<stdio.h>
int main()
{
int marks1,marks2,marks3,percentage;
printf("\n Enter marks of 3 subject to get result");
scanf("%d %d %d",&marks1,&marks2,&marks3);
percentage=(marks1+marks2+marks3)/3;
if(percentage<=75)
     printf("You passed");
else if(percentage>75 && percentage<=80)
    printf("Congratulations, You scored B grade");
else if(percentage>85 && percentage<=90)
    printf("Congratulations, You scored B+ grade");
else if(percentage>90 && percentage<=95)
    printf("Congratulation, You scored A grade");
 else 
    printf("Congratulations, You scored A+ grade");
 return 0;
 }
