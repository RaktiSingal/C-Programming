#include<stdio.h>
int main
{
int i,n,sum=0,average;
printf("Enter limit to which you want to find average of numbers:");
scanf("%d",&n);
for(i=0;i<n;i++)  
{
sum=sum+i;  
}
average=sum/n;
printf("\n Average of %d numbers is : %d",n,average);
return 0;
}
