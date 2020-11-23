#include<stdio.h>
int main
{
int i,n,sum=0;
printf("Enter limit to which you want to print numbers:");
scanf("%d",&n);
for(i=0;i<n;i++)  
{
sum=sum+i;
}
printf("\n Sum of %d numbers are: %d",n,sum);
return 0;
}
