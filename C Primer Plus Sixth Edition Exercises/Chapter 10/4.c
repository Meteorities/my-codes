#include <stdio.h>

int find_the_largest_index(double array[],int MAX_LENGTH);

int main(void)
{
	int MAX_LENGTH,count;
	printf("Please input your array's max length: ");
	scanf("%d",&MAX_LENGTH);
	double numbers[MAX_LENGTH];
	int the_largest_index = 0;
	printf("Please input each number in the array:\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		scanf("%lf",&numbers[count]);
	}
	the_largest_index = find_the_largest_index(numbers,MAX_LENGTH);
	printf("Origin array shows here:\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		printf("%lf   ",numbers[count]);
	}
	printf("\nThe largest number's index in this array is %d.\n",the_largest_index);
	return 0;
}

int find_the_largest_index(double array[],int MAX_LENGTH)
{
	double max = 0.0;
	int max_index,count;
	for (count = 0;count < MAX_LENGTH;count ++) {
		if (max < array[count]) {
			max = array[count];
			max_index = count;
		}
	}
	return max_index;
}
