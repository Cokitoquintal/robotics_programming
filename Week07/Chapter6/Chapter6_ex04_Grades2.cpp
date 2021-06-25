#include <stdio.h>

char line[3];   //setting maximum characters to 2, because it cannot exceed 99 cents.
int cents, quarters=25, dimes=10, nickels=5, pennies=1;

int main(void)
{
		printf("Quantity of cents to convert\n");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &cents);
	
		if (cents>=100) {
		printf("Sorry, it cannot exceed 99 cents.\n");
		return(1);

		int tquarters=(cents/quarters); 
		cents %= quarters;
		int tdimes=(cents/dimes);
		cents %= dimes;
		int tnickels=(cents/nickels);
		cents %= nickels;
		int tpennies=(cents/pennies);
		cents %= pennies;
		
		printf("%d quarters, %d dimes, %d nickels and %d pennies.\n",
		quarters, dimes, nickels, pennies);
		
	}
return 0;
}

