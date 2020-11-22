#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,compund_interest;
prinf("Enter principle amount,rate,time:");
scanf("%f %f %f",&p,&r,&t);
compound_interest=p*((pow(1+r/100)t)-1);
printf("\n Compound Interest=%f",compound_interest);
return 0;
}
