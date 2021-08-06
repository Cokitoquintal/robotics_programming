/*
Exercise 12-1: Design a structure to hold the data for a mailing list. Write a
function to print out the data.
*/

#include <stdio.h>
#include <string.h>

struct mail_list {

int address, street[50], zip; 
char name[50], city[50], state[3];
//personal information, divided in characters and integers
};

void print_list(struct mail_list *mlist); //print the whole list with the data

int main(void) {

	struct mail_list list[100]; //this list can save 100 entries

	printf("\nStructure to hold the data for a mailing list\n\n\n");

	strcpy(list[0].name, "Lian Gil");
	list[0].address = 854;
	strcpy(list[0].street, "28");
	strcpy(list[0].city, "San Francisco");
	strcpy(list[0].state, "California");
	list[0].zip = 63940;

	strcpy(list[1].name, "Bernardo Hall");
	list[1].address = 445;
	strcpy(list[1].street, "31");
	strcpy(list[1].city, "Las vegas");
	strcpy(list[1].state, "Nevada");
	list[1].zip = 85027;

	strcpy(list[2].name, "Mike Almond");
	list[2].address = 27;
	strcpy(list[2].street, "Almond Hill");
	strcpy(list[2].city, "Los Angeles");
	strcpy(list[2].state, "California");
	list[2].zip = 97149;
	
	strcpy(list[3].name, "Nike");
	list[3].address = 3;
	strcpy(list[3].street, "Nike");
	strcpy(list[3].city, "Nike");
	strcpy(list[3].state, "Nike");
	list[3].zip = 5050;

	print_list(list);

	return(0);
}

void print_list(struct mail_list *mlist) { //structure of the list

	int i; //counter

	printf("Mail list:\n\n");

	for (i = 0; i < sizeof(mlist); ++i) { //loop that counts until sizeof the list
		if (strlen(mlist[i].name) == 0) {
			continue;
		}

		printf("%s\n", mlist[i].name); //personal data to print
		printf("%d %s\n", mlist[i].address, mlist[i].street);
		printf("%s, %s  %d\n\n", mlist[i].city, mlist[i].state, mlist[i].zip);
	}

}

