#include <stdio.h>
/*
Exercise 9-5: Write a function that returns the maximum value of an array of
numbers.
*/

int array[100], lenght, i, location = 0;
//setting an array of 100 elements
//lenght of the array
//i variable used as counter
//location where the number is
char line[100];

int main()
{

  printf("Type the number of elements:\n"); //it determines the list of the array
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%d",&lenght );

  printf("Enter %d numbers:\n", lenght); //input numbers

  for (i = 0; i < lenght; i++) //if i is under lenght, it keeps scanning
    scanf("%d", &array[i]);
    
	fgets(line, sizeof(line), stdin);
  	sscanf(line,"%d", &array[i] );

  for (i = 1; i < lenght; i++) //when i is 1 or true, the maximum number is determined by the lenght
    if (array[i] > array[location])
    location = i;

  printf("The maximum value of the array is %d", array[location]); //print
  return 0;
}
