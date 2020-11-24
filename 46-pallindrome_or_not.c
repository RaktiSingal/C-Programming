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
if(sum==n)
printf("Number is Pallindrome number as its reverse is equal to it self");
else
printf("Not a Pallindrome number");
return 0;
}
