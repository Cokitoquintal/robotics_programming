#include <stdio.h>

char line[100];
float wage, workhours, overhours, pay;
//wage = dollars per hour
//workhours = time worked
//overhours = hours worked over 40
//pay = payment for the hours worked plus overhours

int main() 
{
	printf("Enter the wage of the employee: \n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &wage);
	printf("Enter the hours worked by the employee: \n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &workhours);
	
	if (workhours < 40) { //if the variable is under 40, this statement is true
		pay = (workhours * wage);
		}
	else {
		overhours = (workhours - 40); //if the variable is above 40, this statement is true
		workhours = 40; //now, workhours is 40 because the extra hours are in the variable overhours
		pay = (overhours * wage * 1.5) + (40 * wage);
		}
		
		printf("The pay will be: $%0.2f dollars. \n", pay);
		
	return(0);
}
