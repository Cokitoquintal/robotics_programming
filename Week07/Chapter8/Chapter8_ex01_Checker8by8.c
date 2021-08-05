/*
Exercise 8-1: Print a checker board (8-b y-8 grid). Each square should be 5 -by-3
characters wide.
*/

#include <stdio.h>

const int width_square = 5, width_board  = 8, height_row = 3, height_board  = 8; 

int current_width_square; //what is the current width of the square
int current_width_row; //what is the current width of the row
int current_height_row; //what is the current height of the row
int n_rows; //number of rows so far

int main(void) {

	for (n_rows = 0; n_rows < height_board; ++n_rows) {
		for (current_width_row = 0; current_width_row < width_board; ++current_width_row) {
			printf("+"); //this loop will draw a '+' every 5th character
			for (current_width_square = 0; current_width_square < width_square; ++current_width_square) {
				printf("-"); //this loop fill spaces between '+' with -
			}
		}
		printf("+\n");

		for (current_height_row = 0; current_height_row < height_row; ++current_height_row) {
			for (current_width_row = 0; current_width_row < width_board; ++current_width_row) {
				printf("|"); //this loop will draw a '|' every 5th character
				for (current_width_square = 0; current_width_square < width_square; ++current_width_square) {
					printf(" "); //this loop fill spaces between '|'
				}
			}
			printf("|\n");
		}
	}

	for (current_width_row = 0; current_width_row < width_board; ++current_width_row) {
		printf("+"); //this loop will draw a '+' every 5th character
		for (current_width_square = 0; current_width_square < width_square; ++current_width_square) {
			printf("-"); //this loop fill spaces between '+' with -
		}
	}
	printf("+\n");

	return(0);
}
