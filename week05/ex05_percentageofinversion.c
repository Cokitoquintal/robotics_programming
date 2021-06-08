#include<stdio.h>

int main()
{
    int i, j, Side;

    printf("Write the height and lenght that the square will have: \n");
    scanf("%d", &Side);

    for(i = 0; i < Side; i++)
    {
        for(j = 0; j < Side; j++)
        {
            printf("*");
        }

        // Add a new row
        printf("\n");
    }

    return 0;
}
