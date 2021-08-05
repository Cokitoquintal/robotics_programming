/*
Exercise 9-4: Write a function that takes a character array and returns a primitive
hash code by adding up the value of each character in the array.
*/

#include <stdio.h>

int i;
int hash = 0;


int hash_array(char character[]) { //variable character

	printf("Primitive hash code by a character array:\n\n");
	
		for (i = 0; i < sizeof(character); ++i) {//the loop sums 1 to i
		hash += character[i];
	}

	return(hash);
}

int main(void) {
	
	char character_array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

	printf("Hash code = %d\n", hash_array(character_array));

	return(0);
}
