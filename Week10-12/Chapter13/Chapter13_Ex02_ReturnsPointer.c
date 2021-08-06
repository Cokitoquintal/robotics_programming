/*
Exercise 13-2: Write a program that uses pointers to set each element of an array
to zero.
*/

#include <stdio.h>
#include <string.h>

char *nw_character(char *string) {
//no white character is the definition of space ' ' and tab '	' characters
//variable string represent the input string

	while ((string[0] == ' ') || (string[0] == '\t')) { //space and TAB are non shite characters
	  ++string; //increment the variable in 1
	}
	  return string; //increment the variable in 1
	}
//This loop search a space and replaces it with the pointer, but if the first character is
//still being a nw-character, the loop repeats

int main() {
	char line[100]; //character input
	
	printf("\nProgram that finds the first non-white character and replaces it with a pointer.\n\n");
	
	printf("Type a string:\n"); //Type the string
	fgets(line, sizeof(line), stdin);
	printf("Resulting string %s\n", nw_character(line)); //output
	
		return(0);
	}
