#include<stdio.h>
int main()
{
int num,n,rem,sum=0;
printf("Enter number to find its reverse");
scanf("%d",&num);
n=num;
while(num!=0)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
printf("Reverse of %d is = %d",n,sum);
