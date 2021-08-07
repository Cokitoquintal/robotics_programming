#include<stdio.h>  
#include<math.h>  

const char *read_file = "Distances.txt";
//this file will be read in order to get input numbers

int main()  
{  
	FILE *readfile;
	//pointer of read_file

    float x1, y1, x2, y2, distance;  
	char line[51]; //set a limit of 50 storage characters
  	
  	readfile = fopen(read_file, "r");
	if (readfile == NULL) { //If the file cannot be opened, an error will be displayed
	fprintf(stderr, "Input file cannot be opened.\n");
	return(8);

		}
	while (feof(readfile)== 0){
		fscanf(readfile, "%f %f %f %f", &x1, &y1, &x2, &y2);
	}

  
    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));  //formula of distance
  
    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", x1, y1, x2, y2, distance);
    fclose(readfile);
  
    return 0;  
}  
