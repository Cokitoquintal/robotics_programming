#include <stdio.h>  
float radius; //radius of the sphere
float volume; //volume of the sphere (result)
char line[50];

const float pi=3.14159265358979323846;  //number pi (first 20 numbers)

int main()  
{  
    printf("Type the radius of the sphere: ");
	fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &radius);
    volume=(4.0/3.0)*pi*(radius*radius*radius);  //formule to calculate the volume of a sphere
    printf("Volume of the sphere: %f\n",volume);  
    
    return(0);
}  
