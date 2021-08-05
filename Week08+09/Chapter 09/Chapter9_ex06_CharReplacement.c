/*
Exercise 9-6: Write a function that scans a character array for the character - and
replaces it with _.
*/

#include <stdio.h>
#include <string.h>

char string[100], character, n_character,line[100];
//character is the original
//n character is replacement
int i; //counter

int main()
{
  	printf("\nType a string:\n");
  	gets(string); //get the variable string
  	
  	printf("\nType the character that will be replaced:\n");
  	scanf("%c", &character); //get the variable character
  	
  	getchar();
  	
  	printf("\nType the character of replacement:\n");
  	scanf("%c", &n_character); //get the variable n_character
  	
  	for(i = 0; i <= strlen(string); i++) //the loop identify any letter and substitute it with the new one a finite times.
  	{
  		if(string[i] == character)  
		{
  		string[i] = n_character; //replacement of the character that repeats
 		}
	}
	
	printf("\nAfter replacing '%c' with '%c' the result is = %s\n", character, n_character, string);
	
  	return 0;
}
