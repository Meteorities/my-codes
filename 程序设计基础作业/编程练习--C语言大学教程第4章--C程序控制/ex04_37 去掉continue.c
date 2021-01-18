#include <stdio.h>
int main(void)
{
	int counter;
	for (counter = 1;counter < 5;counter++) {
		printf("%d\n",counter);
	}
	for (counter = 6;counter <= 10;counter++) {
		printf("%d\n",counter);
	}
	puts("Unused continue to skip printing the value 5");
	return 0;
}
