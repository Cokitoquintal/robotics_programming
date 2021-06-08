#include <stdio.h>
#include <math.h>
 
int main()
{
 
    float r, h;
    float surfacearea, volume;
 
    printf("Enter height and volume of the cylinder : \n");
    scanf("%f%f", &r, &h);
    surfacearea = 2 * (3.14159265359) * r * (r + h);
    volume = (3.14159265359) * r * r * h;
    printf("Surface area of cylinder is: %.3f", surfacearea);
    printf("\nVolume of cylinder is : %.3f", volume);
    return 0;
}
