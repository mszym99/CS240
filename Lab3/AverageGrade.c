#include <stdio.h> //file name: AverageGrade.c

int main(){

	int i = 0;
	int grade;
	double sum = 0;
	double average;
	int total = 0;
	printf("Please input 10 grades :\n");

	while(i == 0) {
	scanf("%d", &grade);
	total++;

	sum = sum + grade;
	printf("Sum is %f\n", sum);
	average = (double) sum / total;
	printf("Average is %f\n", average);

		if(grade == -1000) {
			i = 1;
		}
	}



return 0;
}
