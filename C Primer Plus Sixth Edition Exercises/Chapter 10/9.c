#include <stdio.h>
#define ROW 3
#define COLUMN 5

void copy_array(int row,int column,double source_name[row][column],double target_name[row][column]);
void print_array(int row,int column,double array[row][column]);

int main(void)
{
	double numbers[ROW][COLUMN] = {{1.0,2.0,3.0,4.0,5.0},{6.0,7.0,8.0,9.0,10.0},
	{11.0,12.0,13.0,14.0,15.0}};
	double copy_arr[ROW][COLUMN];
	printf("Now begin to copy array...\n");
	copy_array(ROW,COLUMN,numbers,copy_arr);
	printf("Copy finished.\n\n");
	printf("Origin array:\n");
	print_array(ROW,COLUMN,numbers);
	printf("\nCopied array:\n");
	print_array(ROW,COLUMN,copy_arr);
	printf("\nDone.\n");
	return 0;
}

void copy_array(int row,int column,double source_name[row][column],double target_name[row][column])
{
	int count1,count2;
	for (count1 = 0;count1 < row;count1++) {
		for (count2 = 0;count2 < column;count2++) {
			target_name[count1][count2] = source_name[count1][count2];
		}
	}
}

void print_array(int row,int column,double array[row][column])
{
	int count1,count2;
	for (count1 = 0;count1 < row;count1++) {
		for (count2 = 0;count2 < column;count2++) {
			printf("%lf   ",array[count1][count2]);
		}
		printf("\n");
	}
}
