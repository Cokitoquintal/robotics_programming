/*Exercise 7 -4: Write a program to add an 8% sales tax to a given amount and round
the result to the nearest penny.
*/

#include <stdio.h>

float sales, tax_sales;
char line[100];

int main(void) {

  printf("Type the $ sales:\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%f",&sales );

  tax_sales = (sales + (sales * 8/100));
  
  printf("The sales $ with taxes are %0.2f dollars.\n", tax_sales);

  return 0;
}
