#include <stdio.h> 

int width; int height; int area; int perimeter;      
//Defining numeric variables
int main() {
	width = 3;
	height = 5;	

    perimeter = 2*(width+height);
    //This is the formula of perimeter/
	printf("The perimeter of the rectangle is %d in\n", perimeter);
	area = width*height;
	//This is the formula of area/
	printf("The area of the rectangle is %d in^2\n", area);

return(0);
}
