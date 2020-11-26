#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter number of elements you want to add");
scanf(%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
sum=sum+arr[i];
printf("\n Sum of elements of array is = %d",sum);
return 0;
}
