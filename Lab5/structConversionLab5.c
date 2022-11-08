#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char name[BUFSIZ];
	char ssn[BUFSIZ];
	int age;
	float height;
	float weight;
};


struct Person readData(){
	struct Person p;
	char buff[BUFSIZ];
	//gets(name);
		fgets(buff, BUFSIZ, stdin);
		buff[strlen(buff) - 1] = '\0';
                strcpy(p.name, buff);

	// gets(ssn);
		fgets(buff, BUFSIZ, stdin);
		buff[strlen(buff) - 1] = '\0';
		strcpy(p.ssn, buff);

	//gets(buff);
		fgets(buff, BUFSIZ, stdin);
		p.age = atoi(buff);

//	*age = atoi(buff);
//      gets(buff);
		fgets(buff, BUFSIZ, stdin);
		p.height = atof(buff);
//	*height = atof(buff);
// gets(buff);
		fgets(buff, BUFSIZ, stdin);
		p.weight = atof(buff);
//       *weight = atof(buff);

	return p;
}


void printData(struct Person p){

	printf("%s\n%s\nAge = %d\nHeight(cm) = %g\nWeight(kg) = %g\n", p.name, p.ssn, p.age, p.height, p.weight);

}


int main(){
	struct Person p;

      printf("Reading data ......\n");
	p = readData();
      printf("\n");
      printf("Printing data ....\n");
	 printData(p);

	return 0;
}

