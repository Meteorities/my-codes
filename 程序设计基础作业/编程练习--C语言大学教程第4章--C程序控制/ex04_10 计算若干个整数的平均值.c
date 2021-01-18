#include <stdio.h>
#include <math.h>
int main(void)
{
	double sum = 0;
	int count,number;
	for (count = 0; ; count++) {
		printf("%s\n","Enter an integer ( 9999 to end ):");
		scanf("%d",& number);
		if (number == 0) {
			printf("%s","No values were entered.\n");
			break;
		}
		if (number != 0 && number != 9999) {
			sum += number;
		}
		if (number == 9999) {
			break;
		}
	}
	if (number == 9999) {
		printf("The average is: %.2f\n",sum / count);
	}
	return 0;
}
