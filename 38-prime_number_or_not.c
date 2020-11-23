#include<stdio.h>
int main
{
int i,n,rem,flag=0;
printf("Enter number to find prime or not:");
scanf("%d",&n);
for(i=2;i<n;i++)  
{
rem=n%i;
if(rem==0)
{
flag=1;
break;
}
}
if(flag==1)
printf("\n Not Prime");
else
printf("\n Prime");
return 0;
}
