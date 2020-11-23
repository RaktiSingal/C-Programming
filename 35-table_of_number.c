#include<stdio.h>
int main
{
int i,n;
printf("Enter number of which you want to calculate table:");
scanf("%d",&n);
printf("\n Table of %d :",n);
for(i=0;i<=10;i++)  
{
printf("\n %d X %d = %d",n,i,n*i);   
}
return 0;
}
