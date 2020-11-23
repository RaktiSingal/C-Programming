#include<stdio.h>
int main()
{
int age;
printf("Enter your age in years");
scanf("%d",&age);
if(age<=0)
    printf("\n Infant");
else if(age>0 && age<12)
     printf("\n Child");
else if(age>=12 && age<19)
    printf("\n Teenager");
else if(age>=20 && age<50)
     printf("\n Mature);
else
  printf("\n Old");
 return 0;
 }
