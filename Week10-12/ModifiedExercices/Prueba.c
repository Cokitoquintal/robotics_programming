#include<stdio.h>

const char *written_file = "written_file.txt";
//this file will be written

int main()
{
	FILE *writtenf;//set a pointer
	char line [100];
    int i, j, Side;

	writtenf = fopen("written_file.txt", "w+");



    printf("Write the height and lenght that the square will have: \n");
    scanf("%d", &Side);

    for(i = 0; i < Side; i++)
    {
        for(j = 0; j < Side; j++)
        {

        }

    }
	fprintf(writtenf, "*");
    return 0;
}

