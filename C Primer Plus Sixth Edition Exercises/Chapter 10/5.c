#include <stdio.h>

double max_and_smallest_diff(double array[],int MAX_LENGTH);

int main(void)
{
	int MAX_LENGTH,count;
	printf("Please input your array's max length: ");
	scanf("%d",&MAX_LENGTH);
	double numbers[MAX_LENGTH];
	double diff_result = 0.0;
	printf("Please input each number in the array:\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		scanf("%lf",&numbers[count]);
	}
	diff_result = max_and_smallest_diff(numbers,MAX_LENGTH);
	printf("The difference between the largest and smallest elements is %lf.\n",diff_result);
	return 0;
}

double max_and_smallest_diff(double array[],int MAX_LENGTH)
{
	double max = 0.0;
	double min = array[0];  //这个初值很重要，否则会引起程序部分结果出错 
	int count;
	for(count = 0;count < MAX_LENGTH;count++) {
		if (max < array[count]) {
			max = array[count];
		}
		if (min > array[count]) {
			min = array[count];
		}
	}
	return (max - min);
}
