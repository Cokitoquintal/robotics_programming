/*
Exercise 14-1: Write a program that reads a file and then counts the number of
lines in it.
*/

#include <stdio.h>

const char *filename = "exercice1.txt"; //filename pointed to

int main() {
	char line[100];
	int count = 0;

	printf("\nCounter of lines in a file\n\n");

	FILE *filehanded;		//the storing of data in a file using a program.

	filehanded = fopen(filename, "r"); 
	//fopen returns the pointer source if it opens the file successfully or
	//false if it fails to open the file.
	if (filehanded == 0) {
		
	fprintf(stderr, "This file cannot be oppened\n");
	//stderr us used to register message errors
return(8);
	}

	while (fgets(line, sizeof(line), filehanded)) { //this loop counts lines from the file
		++count;
}
		printf("This file has %d lines\n", count); //counter output

return(0);
}
