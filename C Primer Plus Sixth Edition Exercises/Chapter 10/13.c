#include <stdio.h>

void input_array(double array[][5]);  //input
double each_average(double array[][5],int first_index);  //each group average,return result,use for in calling function
double all_average(double array[][5]);  //all average,return result
double find_the_largest(double array[][5]);  //largest num,return result
void print_result(double array[][5]);  //print

int main(void)
{
	double num[3][5];
	printf("Please input each number in a 3x5 array:\n");
	input_array(num); //input
	print_result(num); //prints
	printf("Done.\n");
	return 0;
}

void input_array(double array[][5])
{
	int i,j;
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 5;j++) {
			scanf("%lf",&array[i][j]);
		}
	}
}

double each_average(double array[][5],int first_index)
{
	int count;
	double each_total,each_average;
	for(count = 0;count < 5;count++) {
		each_total += array[first_index][count];
	}
	each_average = each_total / 5;
	return each_average;
}

double all_average(double array[][5])
{
	double total = 0.0;
	double average = 0.0;
	int i,j;
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 5;j++) {
			total += array[i][j];
		}
	}
	average = total / 15;
	return average;
}

double find_the_largest(double array[][5])
{
	double max = 0.0;
	int i,j;
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 5;j++) {
			if (max < array[i][j]) {
				max = array[i][j];
			}
		}
	}
	return max;
}

void print_result(double array[][5])
{
	int i,j,count;
	printf("The original 3x5 array:\n");
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 5;j++) {
			printf("%lf    ",array[i][j]);
		}
		printf("\n");
	}
	printf("The average of each set:\n");
	for(count = 0;count < 3;count++) {
		printf("Set %d Average: %lf\n",count+1,each_average(array,count));
	}
	printf("The average of all numbers in the array: %lf\n",all_average(array));
	printf("The largest number in the array: %lf\n",find_the_largest(array));
}
