#include<stdio.h>
int main()
{
int n;
printf("Enter how many elements you want to enter in array:");
scanf("%d",n);
int a[n],b[n],c[n];
printf("Enter 1st array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter 2nd array");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
for(i=0;i<n;i++)
c[i]=a[i]+b[i];
printf("Sum of both array:");
for(i=0;i<n;i++)
printf("%d",c[i]);
return 0;
}
