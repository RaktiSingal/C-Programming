#include<stdio.h>
int main()
{
char character;
printf("Enter character to check whether it is uppercase or lowercase:");
scanf("%c",&character);
if(char>=65 && char<=90)
  printf("\n Uppercase Alphabet");
if(char>=97 && char<=122)
  printf("\n Lowercase Alphabet");
return 0;
}
