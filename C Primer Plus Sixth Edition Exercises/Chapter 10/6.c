#include <stdio.h>

int reverse_array(double array[],int MAX_LENGTH);

int main(void)
{
	int MAX_LENGTH,count;
	printf("Please input your array's max length: ");
	scanf("%d",&MAX_LENGTH);
	double numbers[MAX_LENGTH];
	printf("Please input each number in the array:\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		scanf("%lf",&numbers[count]);
	}
	printf("\nThe reversed array is shown here:\n");
	fake_reverse_array(numbers,MAX_LENGTH);
	printf("\nDone.\n");
	return 0;
}

int fake_reverse_array(double array[],int MAX_LENGTH)
{
	int count;
	for (count = MAX_LENGTH - 1;count >= 0;count--) {
		printf("%lf   ",array[count]);
	}
	return 0;
}
