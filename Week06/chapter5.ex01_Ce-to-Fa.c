#include <stdio.h>

float f; //Fahrenheit variable
float c; //Centigrade variable
char line[50];

int main() {
  printf("Convert C degrees: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &c);

  f = ((9.0 / 5.0) * c) + 32.0; //formule to convert C degrees to F degrees
  printf("%f Fahrenheit.\n", f);

  return(0);
}
