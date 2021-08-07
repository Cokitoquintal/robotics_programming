#include <stdio.h>

const char *read_file = "read_file.txt";
//this file will be read in order to get input numbers

const char *divisibleby_3 = "divisibleby_3.txt";
//this file will be filled with numbers divisible by 3

const char *restof_numbers = "restof_numbers.txt";
//this file will be filled with the rest of numbers

int main() {

	FILE *readf;
	//pointer of read_file
	FILE *divisible;
	//pointer of divisibleby_3
	FILE *rest;
	//pointer of restof_numbers

	printf("\nRead a file and create two more files, one with\nnumbers divisibles to 3 and another one with the rest.\n");

	int num;
	//variable of numbers
	char line[100];


	readf = fopen(read_file, "r");
		if (readf == NULL) {
			fprintf(stderr, "Input file cannot be opened.\n");
			return(8);
		
	}

	divisible = fopen(divisibleby_3, "w+");
	//w+ can write a file, delete content or create a new file
	
	rest = fopen(restof_numbers, "w+");

	while (fgets(line, sizeof(line), readf)) {
	//loop that reads 'read_file'
		sscanf(line, "%d", &num);
		if ((num % 3) == 0) { 
		//operation to determine if it is divisible by 3 or not
		
			fprintf(divisible, "%d\n", num);
			//print on 'divisibleby_3' file
		} else {
			fprintf(rest, "%d\n", num);
			//print on 'restof_numbers' file
		}
	}

		fclose(readf);
		fclose(divisible);
		fclose(rest);
		//closing all files
		
		fprintf(stderr, "\nFiles were generated succesfuly.\n");
	return(0);
}
