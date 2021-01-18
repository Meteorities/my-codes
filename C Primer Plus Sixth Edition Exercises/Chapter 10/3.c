#include <stdio.h>

int find_the_largest(int array[],int MAX_LENGTH);

int main(void)
{
	int MAX_LENGTH,count;
	printf("Please input your array's max length: ");
	scanf("%d",&MAX_LENGTH);
	int numbers[MAX_LENGTH];
	int the_largest = 0;
	printf("Please input each number in the array:\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		scanf("%d",&numbers[count]);
	}
	the_largest = find_the_largest(numbers,MAX_LENGTH);
	printf("The largest number in this array is %d.\n",the_largest);
	return 0;
}

int find_the_largest(int array[],int MAX_LENGTH)
{
	int max = 0;
	int count;
	for (count = 0;count < MAX_LENGTH;count ++) {
		if (max < array[count]) {
			max = array[count];
		}
	}
	return max;
}
