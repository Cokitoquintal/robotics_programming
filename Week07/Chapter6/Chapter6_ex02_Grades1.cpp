#include <stdio.h>

int main(void)
{
	float num;
	char line[4]; //setting a limit of 3 characters, because the maximum grade allowed (100) contains 3 characters
	
	printf("Enter a numeric grade:\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &num);
  	
		if(num>=101){
		printf("Invalid number, enter a numeric grade below 101\n"); //grades above 100 does not exist
			}
		else if (num>=91){
			printf("Numberic grade is equal to A\n"); //number grade equal or above 91 is an A grade
			}
		else if (num>=81){
			printf("Numberic grade is equal to B\n"); //number grade equal or above 81 is a B grade
			}
		else if (num>=71){
			printf("Numberic grade is equal to C\n"); //number grade equal or above 71 is a C grade
			}
		else if (num>=61){
			printf("Numberic grade is equal to D\n"); //number grade equal or above 61 is an D grade
			}
		else if (num<60){
			printf("Numberic grade is equal to F\n"); //number grade under 61 failed
			}
	return 0;
	}
