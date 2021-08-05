/*
Exercise 7-6: Write a program that takes a series of numbers and counts the
number of positive and negative values.
*/

#include <stdio.h>

float n[5];
int i, poscount=0, negcount=0;
//i is the variable that will check the numbers in the loop
//positive numbers counter
//negative numbers countes

int main() {
	float n[10];
	int j, pctr=0, nctr=0;
	printf("\nPositive and negative numbers counter\n");
	printf("\nType a serie of ten numbers, these can be negatives, separate it by spaces:\n"); 
    scanf("%f %f %f %f %f %f %f %f %f %f", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[7], &n[8], &n[9]);
    
	for (i = 0; i < 11; i++) { //i will verify if a number is positive or negative
		if(n[i] > 0)
		{
			
			poscount++; //if i is above 0, the positive counter sums 1
		}
		else if(n[i] < 0) 
		{
			negcount++; //if i is under 0, the negative counter substracts 1
		}
	}
	printf("\n%d of the 10 numbers are positive", poscount);
	printf("\n%d of the 10 numbers are negative", negcount);
	return 0;
}
