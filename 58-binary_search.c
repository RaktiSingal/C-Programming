#include<stdio.h>
int main()
{
int a[5]={10,20,30,40,50};
int l,h,m,num;
printf("Enter number to search");
scanf("%d",&num);
l=0;
h=4;
m=(l+h)/2;
while(a[m]!=num && l!=h)
{
if(num>a[m])
l=m+1;
else
h=m-1;
m=(l+h)/2;
}
if(a[m]==num)
printf("Number found");
else
printf("Number not found");
}
