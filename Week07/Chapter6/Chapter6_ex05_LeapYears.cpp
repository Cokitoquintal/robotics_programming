#include <stdio.h>
int main(void)
{
	int year;
	char line[51]; //setting a limit of 50 characters.
	
	printf("Enter a year to prove if it is a leap year:\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &year);
	
   if (year % 400 == 0) {
      printf("%d is a leap year", year);
   }

   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }

   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   else {
      printf("%d is not a leap year.", year);
   } 
			
	return 0;
}
