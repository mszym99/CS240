#include <stdio.h>
int main(){
//file name:
int a = 3;
int b = 4;
double c = ++a + b++;
size_t size = sizeof(c/a);
printf("%u\n", a);
printf("%u\n", b);
printf("%f\n", c);
printf("%zu\n", size);

return 0;
}
