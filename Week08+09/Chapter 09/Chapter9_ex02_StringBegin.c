/*
Exercise 9-2: Write a function begins(string1,string2) that returns true if
string1 begins string2.
*/

#include <stdio.h>
#include <stdio.h>

int begins(char string1[], char string2[]) { //set the char variables
	int i = 0; //i variable will allow us to find if string 1 begins string 2

	while (1) {
	
		if (string1[ i ] == '\0') { //'\0' determine the end of a string
			return(1);	//this loop analyze string 1, if every word match, it is true
		}
		if (string1[i] != string2[i]) { //if a letter of string 1 is different, it is false
			return(0);
		}
		++i;
	}
}

int main(void) {

	if (begins("Bool", "Boolean")) { //we test it with boolean, the first 4 letters are the same, this statement is true.
		printf("Word 1 begins word 2.\n");
	} else {
		printf("Word 1 does not begins word 2.\n");
	}

	return(0);
}
