#include <stdio.h>
int hr; //hours ti be converted
int min; //minutes to sum
int totalm; //total minutes (result)

const int mtoh = 60; //total minutes that are equal to 1 hour
char line[50];

int main() {
	printf("Input hours to be converted: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &hr);
	printf("Input minutes to be sumed: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &min);

	totalm=min+(hr*mtoh);
	printf("Total minutes: %d.\n", totalm);

	return(0);
}
