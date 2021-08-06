/*
Exercise 13-1: Write a program that uses pointers to set each element of an array
to zero.
*/

#include <stdio.h>
#define n_array 10 //allow constant values to be declared for use throughout your code.

int values[n_array] = {1, -4, 28492, 3, 0, 8429, 123, -523, 2142, .214};
//array of numbers

int i, *values_pointer;
//index variable
//set a pointer to the variable

int main() {
	
	printf("\nEach number will be converted in 0:\n");
	printf("\nOriginal values:\n\n");

	for (i = 0; i < n_array; ++i) { //loop for 
		printf("%d value = %d\n", i, values[i]);
	}

	/* set a pointer to the start of array */
	values_pointer = &values[0];

	for (i = 0; i < n_array; ++i) { //loop is repeated iterated times
		*values_pointer = 0;
		++values_pointer;
	}
    printf("\nNew values:\n\n");
	for (i = 0; i < n_array; ++i) {
			printf("%d value = %d\n", i, values[i]); //prints the resulting array
		
	}

	return(0);
}
