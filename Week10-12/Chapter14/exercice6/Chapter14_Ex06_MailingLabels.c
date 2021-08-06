/*
Exercise 14-6: Design a file format to store a person's name, address, and other
information. Write a program to read this file and produce a set of mailing labels
*/

#include <stdio.h>
#include <string.h>

char *in_file = "exercice6.txt";

int main() {

	FILE *infile;           /* file pointer to input file */
	char line[100];         /* a line from the file */

	int position;           /* position into the record */

	infile = fopen(in_file, "r");
	if (infile == 0) {
		fprintf(stderr, "This file cannot be opened\n", in_file);
		return(8);
	}

	position = 0;
	while (fgets(line, sizeof(line), infile)) { 
		if (line[0] == '\n') { //\n is a separator
			printf("\n");
			position = 0;
			continue;
		}

		line[strlen(line) - 1] = '\0'; //null terminator string

		switch (position) {
			  case 1: //last name
			  case 2: //street
			  case 5: //zip code
			  case 6: //phone
				printf("%s\n", line);
				break;
			  case 0: //first name
			  case 4: //state
				printf("%s ", line); //giving format
				break;
			  case 3: //city
				printf("%s, ", line);
				break;
			  default:
				printf("unknown data\n");
		}

		++position; //move from position
	}
	fclose(infile); //close the file
	return(0);
}
