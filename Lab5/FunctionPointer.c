#include <stdio.h>

int Add(int X, int Y);
int Subtract(int X, int Y);
int Multiply(int X, int Y);
int Divide(int X, int Y);

int(*pFcn)(int, int);
int main(){
int X, Y, operation;
printf("Enter a number: ");
scanf(" %d", &X);
printf("Enter another number: ");
scanf(" %d", &Y);
printf("Enter an operation (0=add, 1=subtract, 2=multiply, 3 = Divide ): ");
scanf(" %d", &operation);
switch (operation) {
      case 0: pFcn = Add; break;
      case 1: pFcn = Subtract; break;
      case 2: pFcn = Multiply; break;
      case 3: pFcn = Divide; break;
        }
     printf("The answer is : %d\n", pFcn(X,Y));
return 0;
}

int Add(int X, int Y) {
	return (X + Y);
}

int Subtract(int X, int Y) {
	return (X - Y);
}

int Multiply(int X, int Y) {
	return (X * Y);
}

int Divide(int X, int Y) {
	return (X / Y);
}
