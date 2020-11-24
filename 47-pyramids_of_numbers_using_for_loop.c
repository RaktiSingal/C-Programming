#include<stdio.h>
int main()
{
int i,j;
  for(i=1;i<=5;i++)
  {                                                               //output will be :  1
  for(j=1;j<=i;j++)                                             //                    1 2
  printf("%d ",j);                                               //                   1 2 3
  printf("\n");                                                 //                    1 2 3 4
  }                                                              //                   1 2 3 4 5
  
  for(i=5;i>=1;i--)                                              // output will be:    5 5 5 5 5
  {                                                              //                    4 4 4 4
  for(j=1;j<=i;j++)                                              //                    3 3 3
  printf("%d ",i);                                               //                    2 2
  printf("\n");                                                  //                    1
  }
  return 0;
  }
