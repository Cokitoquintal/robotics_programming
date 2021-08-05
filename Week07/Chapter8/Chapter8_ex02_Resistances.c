/*
Exercise 8-2: Write a program to compute the total resistance for any number of parallel resistors
*/

#include <stdio.h>

float resistance; //input resistance
float res_total; //currently total
char line[100];

int main(void) {

	while (1) {
	
		printf("Type resistance in Ohms:\n");
		printf("Type 0 to calculate:\n");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%f", &resistance);

		if (resistance == 0.0) { //it prints direclty the total and ends the program
			printf("Result: %0.06f\n", 1 / res_total); //formule to obtain resistance
			return(0);
		}
		res_total += 1 / resistance; //it will invert the operation 1/r to obtain the result

	}
}
