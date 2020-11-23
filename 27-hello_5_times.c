#include<stdio.h>
int main
{
int i;
for(i=0;i<5;i++)    // i=0 is initialization , i<5 is condition that is checked everytime i++ is increment line that tells how much to add here i is incresed 1 time each 
{
printf("\n Hello");   
}
return 0;
}


// Dry run 
// loop       i          i<5           output             due to i++/(i=i+1)
//  1         0          0<5  true       Hello     then i is increased by 1 so next time value becomes 1
//  2         1          1<5  true       Hello     then i is increased by 1 so next time value becomes 2
//  3         2          2<5  true       Hello     then i is increased by 1 so next time value becomes 3
//  4         3          3<5  true       Hello     then i is increased by 1 so next time value becomes 4
//  5         4          4<5  true       Hello     then i is increased by 1 so next time value becomes 5
//  6         5          5<5  false      
                                // now it comes out of loop 
                                //   Result :
                                       //    Hello is printed 5 times and loop is executed 6 times.
