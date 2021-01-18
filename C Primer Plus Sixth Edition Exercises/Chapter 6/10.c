#include <stdio.h>
int main(void)
{
	int lower_limit, upper_limit, count,sum = 0,square;
	printf("Enter lower and upper integer limits:");
	scanf_s("%d %d", &lower_limit, &upper_limit);
	while (upper_limit > lower_limit) {
		for (count = lower_limit; count <= upper_limit; count++) {
			square = count * count;
			sum += square;
		}
		printf("The sums of the squares from %d to %d is %d\n", lower_limit * lower_limit, upper_limit * upper_limit, sum);
		sum = 0;
		printf("Enter next set of limits:");
		scanf_s("%d %d", &lower_limit, &upper_limit);
	}
	printf("Done\n");
	return 0;
}