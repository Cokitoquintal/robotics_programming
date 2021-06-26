#include <stdio.h>

char line[3];   //setting maximum characters to 2, because it cannot exceed 99 cents.
int cents=0, quarters=0, dimes=0, nickels=0, pennies=0;

int main() 
{
	printf("Type the quantity of cents to convert \n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &cents);

	if (cents >= 100) {
		printf("The limit is set on 99 pennies.\n");	//error message, the user must enter a number below 100 pennies.
		return(1);
	} else if (cents < 1) {
		printf("The quantity registered must be at least 1 penny\n");	//error message, it cannot be a number below 1 penny.
		return(1);}

	while (1) {
		if (cents >= 25) {	//value of quarters is equal to 25 pennies.
			++quarters;		//++variable increases integer value by one
			cents -= 25;	//this operator substract the right operant from the left operant. it means that the variable "cents" decrease by 25 times the number of quarters.
			
		} else if (cents >= 10) { //value of nickels is equal to 10 pennies.
			++dimes;		
			cents -= 10;	//Variable "cents" decrease by 10 times the number of cents, less the quarters.
			
		} else if (cents >= 5) { //value of cents is equal to 5 pennies.
			++nickels;		
			cents -= 5;		//Variable "cents" decrease by 5 times the number of cents, less the quarters and nickels.
			
		} else if (cents >= 1) { //value of penny is equal to 1.
			++pennies;		
			--cents;		//--variable decreases integer value by one
			
		} else if (cents == 0) {
			break;
		}
	}

	printf("Cents converter: \n %d quarters.\n %d dimes.\n %d nickels.\n %d pennies.\n",
		quarters, dimes, nickels, pennies);

	return(0);
	}

//this code is based in the code of tangledhelix, from https://github.com/tangledhelix/practical-c-programming/blob/main/chap_06/6-4/loose_change.c
//some changes were made, also the explaniation of operators.

