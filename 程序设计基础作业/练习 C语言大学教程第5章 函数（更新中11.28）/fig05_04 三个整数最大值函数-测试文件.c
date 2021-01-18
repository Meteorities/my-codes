#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y, int z);

int main(void)
{
   int number1;
   int number2;
   int number3;

   printf("%s\n", "Enter three integers: ");
   scanf("%d%d%d", &number1, &number2, &number3);

   printf("Maximum is: %d\n", maximum(number1, number2, number3));

   return 0;
}

int maximum (int x,int y,int z)
{
	int max = 0;
	if (x > y) {
		max = x;
	} 
	if (x < y) {
		max = y;
	} 
	if (max > z) {
		max = max;
	}
	if (max < z) {
		max = z;
	}
	return max;
}
