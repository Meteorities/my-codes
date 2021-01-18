#include <stdio.h>
int main(void)
{
	double sum = 0.0,count;
	int limit;
	printf("Please enter the limit of terms:");
	scanf_s("%d", &limit);
	while (limit > 0) {
		if (limit % 2 == 0) { //even term number given
			for (count = 1.0;count < (double)limit; count += 2.0) {
				sum += (1.0 / count);
			}
		}
		else if (limit % 2 != 0) { //odd term number given
			for (count = 1.0;count <= (double)limit; count += 2.0) {
				sum += (1.0 / count);
			}
		}
		printf("Sum is %lf\n", sum * 2.0);
		sum = 0.0;
		printf("Please enter the limit of terms:");
		scanf_s("%d", &limit);
	}
	return 0;
}