#include<stdio.h>
int main()
{
int n1,n2,add,sub,choice;
printf("Enter 2 numbers on which you want to perform operations");
scanf("%d %d",&n1,&n2);
printf("\n Enter choice of operation press 1 for addition and press 2 for subtraction");
scanf("%d",&choice);
switch(choice)
{
case 1:
add=n1+n2;
printf("\n Numbers are added and result is %d",add);
break;
case 2:
sub=n1-n2;
printf("\n Numbers are subtracted and result is %d",sub);
break;
default:
printf("\n Invalid choice");
}
return 0;
}
