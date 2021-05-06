#include<stdio.h>    
#include<stdlib.h>  
int main(){  
char a[20];
  int i;    
printf("Enter the string: ");    
gets(a);    
for(i=0;a[i]!='\0';i++)    
 
printf("\nLength of Given String is= %d",i);      
return 0;  
}  
