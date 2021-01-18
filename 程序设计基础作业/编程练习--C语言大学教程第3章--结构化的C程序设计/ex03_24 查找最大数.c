#include <stdio.h>
int main(void)
{
	int counter,number,largest;
	printf("Enter the first number: ");
	scanf("%d",& number);
	largest = number;
	for (counter = 1;counter < 10;counter++) {
		printf("Enter next number: ");
		scanf("%d",& number);
		if (number > largest) {
			largest = number;
		}
	}
	printf("Largest is %d\n",largest);
	return 0;
}
