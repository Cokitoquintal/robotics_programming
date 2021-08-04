/*Exercise 7-2: Write a program to perform date arithmetic such as how many days
there are between 6/6/90 and 4/3/92. Include a specification and a code design. 
*/

#include <stdio.h>

int main(void) {
	  char line[100];
	  int start_d, start_m, start_y, final_d, final_m, final_y;
	  //divided in start day, month and year, and final day, month and year
	  float total_days;
	
	//start date
	  printf("Start day\n");
	  fgets(line, sizeof(line), stdin);
	  sscanf(line, "%d", &start_d);
	
	  printf("Start month\n");
	  fgets(line, sizeof(line), stdin);
	  sscanf(line, "%d", &start_m);
	  
	    printf("Start year\n");
	  fgets(line, sizeof(line), stdin);
	  sscanf(line, "%d", &start_y);
	
	printf("Start date is %d/%d/%d\n\n", start_d, start_m, start_y);
	
	//final date
	    printf("Final day\n");
	  fgets(line, sizeof(line), stdin);
	  sscanf(line, "%d", &final_d);
	
	  printf("Final month\n");
	  fgets(line, sizeof(line), stdin);
	  sscanf(line, "%d", &final_m);
	  
	    printf("Final year\n");
	  fgets(line, sizeof(line), stdin);
	  sscanf(line, "%d", &final_y);
	
	printf("Final date is %d/%d/%d\n\n", final_d, final_m, final_y);
	
	total_days = (final_y - start_y)*365 + (final_m - start_m)*30.5 + (final_d - start_d);

	  printf("There are %0.0f days between those dates", total_days);
	  
  return 0;
}

