#include<stdio.h>
int main()
{
printf("Enter number to find its armstrong or not");
scanf("%d",&num);
n=num;
while(num!=0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(sum==n)
printf("Armstrong number as number equals to each digit to power 3 is added");
else
printf("Not Armstrong");
return 0;
}
