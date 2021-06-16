#include <stdio.h>
int hr; //hours to be calculated
int min; //minutes to be calculated
int totalm; //total minutes (result)

const int htom = 60; //total minutes that are equal to 1 hour
char line[50];

int main() {
	printf("Input minutes: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &totalm);

	hr=(totalm/htom); //division to obtain hours
	min=(totalm % htom); //remainder after division to obtain minutes

	printf("%d Hours, %d Minutes.\n", hr, min);

	return(0);
}

