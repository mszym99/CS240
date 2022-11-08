#include <stdio.h>
int main(){
	short sInt = 20;
	int oInt = 100;
	char charType;
	double d = 10.00;
	long lVar = 1000000;
	long double ldVar = 2000000000;
printf("Size of short is: %zu\n", sizeof(sInt));
printf("Size of int is: %zu\n", sizeof(oInt));
printf("Size of char is: %zu\n", sizeof(charType));
printf("Size of double is: %zu\n", sizeof(d));
printf("Size of long is: %zu\n", sizeof(lVar));
printf("Size of long double is: %zu\n", sizeof(ldVar));


printf("%d\n", sizeof(short) < sizeof(int));
printf("%d\n", sizeof(char) < sizeof(short));
printf("%d\n", sizeof(long) > sizeof(int));
printf("%d\n", sizeof(long double) > sizeof(double));




return 0;
}
