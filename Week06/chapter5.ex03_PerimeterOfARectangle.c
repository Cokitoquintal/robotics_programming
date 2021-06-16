#include <stdio.h>
int main()
{
float height; //width of the rectangle
float width; //height of the rectangle  
float perimeter; //calculated perimeter

printf("Input the height: ");
scanf("%f", &height);
printf("Input the width: ");
scanf("%f", &width);
perimeter = 2*(height + width); 
printf("Perimeter of the rectangle is: %f", perimeter);
return 0;
}
