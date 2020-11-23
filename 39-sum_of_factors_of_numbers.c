#include<stdio.h>
int main
{
int i,n,rem,sum=0;
printf("Enter number which you want to find sum of factors:");
scanf("%d",&n);
for(i=1;i<n;i++)  
{
if(i%n==0)
sum=sum+i;
}
printf("\n Sum of factors of %d is= %d",n,sum);
return 0;
}
