#include <stdio.h>


const char *read_file = "read_file.txt";
//this file will be read in order to fill the following file

const char *written_file = "written_file.txt";
//this file will be written

int main() {
	int characters; //variable to store characters from the file
	
	FILE *readf; //set a pointer
	FILE *writtenf;//set a pointer
	
	printf("\nChange tab spaces with 8 spaces in a file.\n");
	
	//this file will be read
	readf = fopen(read_file, "r"); 
		if (readf == NULL) { 
			fprintf(stderr, "Input file cannot be opened.\n");
			//print an error message if the file cannot be oppened
			return(8);
		}

	//this file will be written
	writtenf = fopen(written_file, "w+"); //w+ can write a file, delete content or create a new file

	while (1) {

		characters = fgetc(readf);
		//variable 'characters' will be taken from read_file
	

		if (characters == EOF) { 
		//if the end of the file is reached, break/end
		break;
		}


		if (characters == '\t') {
			fputc(' ', writtenf);
			fputc(' ', writtenf);
			fputc(' ', writtenf);
			fputc(' ', writtenf);
			fputc(' ', writtenf);
			fputc(' ', writtenf);
			fputc(' ', writtenf);
			fputc(' ', writtenf);
			//tab is equal (in some programs) to 8 spaces, so this will replace iy
			
		} else {
			fputc(characters, writtenf);
			//this will fill the content from read_file
			
		}
	}

	fclose(readf);
	fclose(writtenf);
	//closing both files
	
	fprintf(stderr, "\nSuccesful result.\n");
	
	return(0);
}

