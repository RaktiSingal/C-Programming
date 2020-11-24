#include<stdio.h>
int main()
{
int n,sum=0,rem,num;
printf("Enter number to find sum of digits:");
scanf("%d",&n);
num=n;
while(num!=0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("Sum of digits of a %d = %d",n,sum);
return 0;
}
