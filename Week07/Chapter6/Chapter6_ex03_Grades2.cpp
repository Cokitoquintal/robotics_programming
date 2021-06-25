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
		else if (num>=98){
			printf("Numberic grade is equal to A+\n"); //number grade equal or above 91 is an A grade
			}
		else if (num>=94){
			printf("Numberic grade is equal to A\n"); //number grade equal or above 81 is a B grade
			}
		else if (num>=91){
			printf("Numberic grade is equal to A-\n"); //number grade equal or above 71 is a C grade
			}
		else if (num>=88){
			printf("Numberic grade is equal to B+\n");
			}
		else if (num>=84){
			printf("Numberic grade is equal to B\n");
			}
		else if (num>=81){
			printf("Numberic grade is equal to B-\n");
			}
		else if (num>=78){
			printf("Numberic grade is equal to C+\n");
			}
		else if (num>=74){
			printf("Numberic grade is equal to C\n");
			}
		else if (num>=71){
			printf("Numberic grade is equal to C-\n");
			}
		else if (num>=68){
			printf("Numberic grade is equal to D+\n");
			}
		else if (num>=64){
			printf("Numberic grade is equal to D\n");
			}
		else if (num>=61){
			printf("Numberic grade is equal to D-\n");
			}
		else if (num<60){
			printf("Numberic grade is equal to F\n"); //number grade under 61 failed
			}
			
	return 0;
	}
