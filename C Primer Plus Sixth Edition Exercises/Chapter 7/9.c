#include <stdio.h>
#include <math.h>
int main(void)
{
	int input,check,square_root,i,test;
	printf("%s\n", "Please input a positive integer:");
	check = scanf_s("%d", &input);
	while (check != 1 || input < 0) {
		printf("%s\n", "Please input a positive integer and try again!");
		scanf_s("%*s");
		check = scanf_s("%d", &input);
	}
	for (test = input; test > 1; test--) {
		square_root = (int)sqrt((double)test);
		for (i = 2; i <= square_root; i++) {
			if (test % i == 0) {
				break;
			}
		}
		if (i > square_root) {
			printf("%d is a prime number.\n",test);
		}
	}
	printf("%s\n", "Prime number search is done.");
	return 0;
}
