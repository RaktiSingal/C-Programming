#include<stdio.h>
int main
{
int i,n,square,num;
printf("Enter limit of which you want to find sum of square of even numbers:");
scanf("%d",&num);
for(i=1;i<=num;i++)  
{
square=n*n;
sum+=square;
}
printf("\n Sum of square of %d even number is %d",num,sum);
return 0;
}
