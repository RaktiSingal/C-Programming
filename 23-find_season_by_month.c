#include<stdio.h>
int main()
{
int month;
printf("Enter month for knowing season:");
scanf("%d",&month);
if(month==12 || month==1 || month==2)
  printf("\n Winter season");
else if(month==3 || month==4|| month==5)
   printf("\n Spring season");
else if(month==6 || month==7 || month==8)
   printf("\n Summer season");
else if(month==9 || month==10 || month==11)
     printf("\n Autumn season");
else
   printf("Invalid Month");
 return 0;
 }
