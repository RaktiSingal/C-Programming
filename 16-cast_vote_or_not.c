#include<stdio.h>
int main()
{
int age;
printf("Enter age of person");
scanf("%d",&age);
if(age>=18)
printf("\n Person can cast vote");
else
printf("\nPerson cannot cast vote");
return 0;
}
