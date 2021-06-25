#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    float x1, y1, x2, y2, distance;  
	char line[51]; //set a limit of 50 storage characters
  
    printf("Enter coordinate x1\n");  //first coordinate x1
    fgets(line, sizeof(line), stdin);
  	sscanf(line, "%f", &x1);
  	
    printf("Enter coordinate y1\n");  //second coordinate y1
    fgets(line, sizeof(line), stdin);
  	sscanf(line, "%f", &y1);
  
    printf("Enter coordinate x2\n");  //third coordinate x2
    fgets(line, sizeof(line), stdin);
  	sscanf(line, "%f", &x2);
  	
    printf("Enter coordinate y2\n");  //fourth coordinate y2
    fgets(line, sizeof(line), stdin);
  	sscanf(line, "%f", &y2);
  
    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));  //formula of distance
  
    printf("Distance between (%f, %f) and (%f, %f) is %f\n", x1, y1, x2, y2, distance);  
  
    return 0;  
}  
