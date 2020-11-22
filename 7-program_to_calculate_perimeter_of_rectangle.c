#include<sdio.h>
int main()
{
float length,breath,perimeter;
printf("Enter length and breath for rectangle:");
scanf("%d %d",&length,&breath);
perimeter= 2*(length+breath);
printf("\n Perimeter=%d",perimeter);
return 0;
}
