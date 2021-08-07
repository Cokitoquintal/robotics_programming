/*Exercise 7-1: Write a program to convert English units to metric (i.e., miles to
kilometers, gallons to liters, etc.).

1 mile = 1.60934 kilometer
1 galon = 3.78541 liter
1 feet = 0.3048 meter
1 inch = 2.54 centimeter

*/

#include <stdio.h>

const char *results_conversion = "results.txt";
//this file will be written

const float mtok  = 1.60934; //miles to kilometer
const float gtol  = 3.78541; //galon to liter
const float ftom  = 0.3048; //feet to meter
const float itoc  = 2.54; //inch to centimeter

char line[100]; //input of the user
char contype; //type of conversion
float value; //value of the unit
float result;

int main() {
	
	FILE *results;//set a pointer
	//*results_conversion = "results.txt";
	
	results = fopen("results.txt", "w+");
	//w+ can write a file, delete content or create a new file
	
	printf("(English units to metric units)\n\n");
	printf("(Which operation you want to do?)\n\n");
	printf("(For miles to kilometer, enter 'm')\n");
	printf("(For galon to liter, enter 'g')\n");
	printf("(For feet to meter, enter 'f')\n");
	printf("(For inch to centimeter, enter 'i')\n\n");
	
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%c", &contype); //scan the type of conversion
	
	printf("(Type the value)\n\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &value); //scan the value of the unit
	
	if (contype == 'm') {
		result = (value * mtok); //conversion of meters to kilometers
		fprintf(results, "%0.2f miles = %0.2f kilometers\n", value, result); //print in file
	}
	else if (contype == 'g') {
		result = (value * gtol); //conversion of galons to liters
		fprintf(results, "%0.2f galons = %0.2f liters\n", value, result); //print in file
	}
	else if (contype == 'f') {
		result = (value * ftom); //conversion of feets to meters
		fprintf(results, "%0.2f feet = %0.2f meters\n", value, result);
	}
	else if (contype == 'i') {
		result = (value * itoc); //conversion of inches to centimeters
		fprintf(results, "%0.2f inch = %0.2f centimeters\n", value, result);
	}
	else {fprintf(results, "Invalid tye of conversion\n");
	}
	
	fprintf(stderr, "\nResults have been saved in results.txt\n");
 return(0);
}

//.
