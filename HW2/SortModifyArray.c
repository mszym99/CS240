#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swapElements(int *a, int *b);
void sortArray(int *array, const int size);
void printArray(int *array, const int size);
double findMean(int *array, const int size);
double findMedian(int *array, const int size);
double findStandardDeviation( int *array, const int size, double average);

int main(){

	int  n, *x;
        double mean = 0.0, median = 0.0, stdDev = 0.0;

	printf("This is the basic part of the program that asks the user to type the number of integers, i.e., 'n'. Next, allocate"
	" memory for 'n' integers, read the values of 'n' integers into the allocated memory usining scanf; next, find the mean, median and average of 'n' integers.Lastly, the allocated memory needs to be freed.\n");

	printf("\nRead using scanf how many integers you would like to type:\n");
        scanf("%d", &n);


	/*****************************************************************/

	//x is not automatically assigned a memory block when it is defined as a pointer variable, you need to allocate a block
	//of memory large enough to hold 'n' integers
        // Write the function that allocates memory to hold 'n' integers
	x = malloc(sizeof(int)*n);

        printf("Please type 'n' integers: \n");
	/***********************************************************************/
	//Read in the list of numbers 'n' into the allocated block using scanf
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &x[i]);


        printf("Displaying the numbers:\n");

       // Call printArray to display the integers
	printArray(x, n);
        // Find the mean of integers using findMean function
	mean = findMean(x, n);
        printf("Mean of the numbers is: %f\n", mean);

	median = findMedian(x, n);
        // Fidn the median of integers using findMedian function
        printf("Median of the numbers is: %f\n", median);

	stdDev = findStandardDeviation(x, n, mean);
        // Find the standard deviation of integers using findStandardDeviation function
         printf("Standard deviation of the numbers is: %f\n", stdDev);
       //Deallocate the memory ;



        return 0;
}





void printArray( int *array, const int size){
	int i;
     // Complete this function
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}

void sortArray(int *array, const int size){

     //Complete this function
	//2 for loops 1 outer 1 inner
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - 1; j++)
			if(array[j] > array[j+1])
				swapElements(&array[j], &array[j+1]);


}

void swapElements( int *x, int *y){

     // Complete this function
	int temp = *x; //first pointer x to pointer y
	*x = *y; //pointer a to pointer y
	*y = temp; // need to make a temp.

}



double findMean(int *array, const int size){

    // COmplete this function
	int i;
	double sum = 0.0;
	for (i = 0; i < size; i++)
		sum += array[i];
	return sum/size;
}

double findMedian(int *array, const int size){

   //Complete this function;
	sortArray( array, size);
	if (size%2)
		return array[size/2];
	else
		return (array[size/2] + array[size/2 - 1])/2.0;
}


double findStandardDeviation( int *array, const int size, double average){
	int i;
	double sum = 0.0;
       // Complete this function
	if (size == 1)
		printf("Cannot compute.");

	for (i = 0; i < size; i++) {
		sum += pow((array[i] - average), 2);
}
	if (size > 1)
		return (sqrt(sum/(size-1)));
	else
		return 0;


}
