#include<stdio.h>
int main()
{
int n,i;
printf("Enter number of elements you want to enter:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
printf("\n%d",arr[i]);
return 0;
}
