#include <stdio.h>

const char *Volume_Of_Sphere = "VolumeOfSphere.txt";
//this file will be written

float radius; //radius of the sphere
float volume; //volume of the sphere (result)
char line[100];


const float pi = 3.14159265358979323846264338327950288419716939937510; //some values of PI

int main() {
	
	FILE *VolumeOfSphere;//set a pointer
	
	VolumeOfSphere = fopen("VolumeOfSphere.txt", "w+");
	//w+ can write a file, delete content or create a new file
	
	printf("Enter the radius: "); //input information
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &radius);

	volume=(4.0/3.0)*pi*(radius*radius*radius); //formule to calculate valume of sphere
	fprintf(VolumeOfSphere, "The volume is %0.2f\n", volume); //print in file

	fclose(VolumeOfSphere);
	
	fprintf(stderr, "\nSuccesful result.\n");

	return(0);
}
