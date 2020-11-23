#include<stdio.h>
int main
{
int i,n,fact=1;
printf("Enter number of which you want to find factorial:");
scanf("%d",&n);
for(i=1;i<=n;i++)  
{
  fact=fac*i; 
}
printf("Factorial=%d",fact);
return 0;
}
