#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int i;
    int words=1,characters=0,space=0;
    printf("Please enter the string \n");
    gets(str); //store the given string
    i=0;
    while(str[i] != '\0'){
            if(str[i]!=' '){ // count characters
                characters++;
            }
             else if(str[i]==' ' || str[i] != '\n' || str[i] != '\t'){
                words++; // count words
            }
            i++;
    }
printf("\nTotal words: %d ",words);  //display total number of words
printf("\nTotal characters: %d",characters);  //display total number of characters
printf("\nSpace: %d ",(words-1));  //display total number of space
getch();
    return 0;
}
