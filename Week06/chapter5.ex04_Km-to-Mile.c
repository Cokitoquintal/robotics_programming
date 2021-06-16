#include <stdio.h>
float kmperh; //km/h to be converted
float miperh; //mi/h (result)
char  line[50];

int main()
{
	printf("Input kilometers/hour: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &kmperh);

	miperh = (kmperh * 0.6213712); //formule to get miles per hour
	printf("%f miles/hour\n", miperh);

	return(0);
}
