/*
Exercise 8-3: Write a program to average n numbers
*/

#include<stdio.h>

float n, avg, sum = 0;
int qn, i = 1;
//qn = quantity of numbers/inputs

int main(void) {
{   
  printf("Quantity of numbers\n"); //total inputs to calculate
  scanf ("%d",&qn);
  
   
  while (i <= qn) //this loop stops when i is equal to qn
     {   
      printf ("Number %d:\n", i);   
      scanf("%f", &n);   
      sum += n;
      ++i; 
     }
     
      avg = sum/qn; //formule of average
	     
      printf("\nAverage is equal to: %0.2f\n", avg);   
}
}
