/*
Exercise 9-1: Write a procedure that counts the number of words in a string.
*/

#include <stdio.h>
#include <string.h>
 
int count = 0, i; //setting a counter and a variable i
char words[100]; //setting the limit of words
    
void main()
{

    printf("Program that counts the number of words in a string.\n");
	printf("Type a text:\n");
    scanf("%[^\n]words", words); //input the words
    
    
    for (i = 0;words[i] != '\0';i++) 
    {
        if (words[i] == ' ' && words[i+1] != ' ') //the method to count words use spaces and sum 1 at the end
            count++;    
    }
    printf("The text have %d words.\n", count + 1); //we sum 1 because the number of words is +1 than spaces
    
}
