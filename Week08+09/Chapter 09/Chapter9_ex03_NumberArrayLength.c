/*
Exercise 9-3: Write a function count(number, array, length) that counts the
number of times number appears in array. The array has length elements. The
function should be recursive.
*/

#include <stdio.h>

int count(int i, int *array, int lenght); //declare an i, an array and a length variable

int main()
{
	   int count(int i, int *array, int lenght);
    	printf("number of times that a number appears in array.\n");
	
	   int array[5] = {1, 3, 1, 7, 1}; //1 appears 3 times
	   //list of numbers to count
	
	   int i = 1; //this variable represent the number to be counted
	
    printf("Number %d was counted %d times.\n", i, count(i, array, 5));

	return 0;
}

int count(int number, int *array, int length)
{
    if (length == 0) //stops the program
 return 0;

	return(*array == number) + count(number, array + 1, length - 1);
	//with this function is obtained the times that the number appears.
}
