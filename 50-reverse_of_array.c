#include<stdio.h>
int main()
{
int n,i;
printf("Enter number of elements you want to add in array");
scanf(%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("\n Reverse array is:");
for(i=n-1;i>=0;i--)
printf("\n%d",arr[i]);
return 0;
}
