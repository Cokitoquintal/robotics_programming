#include <stdio.h>
int main() {
   int year;
   printf("Type a year to verify if it is a leap year: ");
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("%d The year you typed is a leap year", year);
   }

   else if (year % 100 == 0) {
      printf("%d The year you typed is not a leap year.", year);
   }

   else if (year % 4 == 0) {
      printf("%d The year you typed is a leap year.", year);
   }

   else {
      printf("%d The year you typed is not a leap year.", year);
   }

   return 0;
}
