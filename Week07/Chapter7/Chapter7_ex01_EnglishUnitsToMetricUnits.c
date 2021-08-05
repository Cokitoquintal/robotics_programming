/*Exercise 7-1: Write a program to convert English units to metric (i.e., miles to
kilometers, gallons to liters, etc.).

1 mile = 1.60934 kilometer
1 galon = 3.78541 liter
1 feet = 0.3048 meter
1 inch = 2.54 centimeter

*/

#include <stdio.h>

const float mtok  = 1.60934; //miles to kilometer
const float gtol  = 3.78541; //galon to liter
const float ftom  = 0.3048; //feet to meter
const float itoc  = 2.54; //inch to centimeter

char line[100]; //input of the user
char contype; //type of conversion
float value; //value of the unit
float result;

int main() {
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
		printf("%f miles = %f kilometers\n", value, result);
	}
	else if (contype == 'g') {
		result = (value * gtol); //conversion of galons to liters
		printf("%f galons = %f liters\n", value, result);
	}
	else if (contype == 'f') {
		result = (value * ftom); //conversion of feets to meters
		printf("%f feet = %f meters\n", value, result);
	}
	else if (contype == 'i') {
		result = (value * itoc); //conversion of inches to centimeters
		printf("%f inch = %f centimeters\n", value, result);
	}
	else {printf("Invalid tye of conversion\n");
	}
	
 return(0);
}

//.
