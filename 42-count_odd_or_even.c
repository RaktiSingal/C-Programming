#include<stdio.h>
int main()
{
int n,n1,i,count=0,even=0,odd=0;
printf("Enter how many numbers you want to add:");
scanf("%d",&n);
printf("\n Enter your numbers:");
for(i=1;i<=n;i++)
{
count++;
if(count!=0)
{
printf("Enter your next choice:");
scanf("%d",n1);
    if(n1%2==0)
           even++;
    else
          odd++;
}
}
printf("\n Number of even numbers entered:%d",even);
printf("\n Number of odd numbers entered:%d",odd);
