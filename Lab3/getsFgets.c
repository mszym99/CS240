#include <stdio.h> //file name: getsFgets.c

int main() {
	char name[100];
	printf("Please enter a name:");
	fgets(name, sizeof(name), stdin);
	printf("The name you entered is %s", name);
	return 0;

}
