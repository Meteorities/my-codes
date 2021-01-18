#include <stdio.h>
/* 有所参考 */ 
void copy_arr(double target_name[],double source_name[],int copy_length);
void copy_ptr(double target_name[],double source_name[],int copy_length);
void copy_ptrs(double target_name[],double source_name[],double *target_name_copy_length);
#define MAX_LENGTH 5 //为了使写出的函数更具模块化 

int main(void)
{
	int count;
	double source[5] = {1.1,2.2,3.3,4.4,5.5};
	double target1[5],target2[5],target3[5];
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_ptrs(target3,source,source + 5);
	printf("Source array:\n");
	for (count = 0;count < 5;count++) {
		printf("%.2f ",source[count]);
	}
	printf("\n\nTarget1 array:\n");
	for (count = 0;count < 5;count++) {
		printf("%.2f ",target1[count]);
	}
	printf("\n\nTarget2 array:\n");
	for (count = 0;count < 5;count++) {
		printf("%.2f ",target2[count]);
	}
	printf("\n\nTarget3 array:\n");
	for (count = 0;count < 5;count++) {
		printf("%.2f ",target3[count]);
	}
	printf("\n\nDone.\n");
	return 0;
}

void copy_arr(double target_name[],double source_name[],int copy_length)
{
	int count;
	for (count = 0;count < copy_length;count++) {
		target_name[count] = source_name[count];
	}
}

void copy_ptr(double target_name[],double source_name[],int copy_length)
{
	int count;
	for (count = 0;count < copy_length;count++) {
		*(target_name + count) = *(source_name + count);
	}
}

void copy_ptrs(double target_name[],double source_name[],double *target_name_copy_length)
{
	int count;
	for (count = 0;count <= MAX_LENGTH;count++) { //注意for判断条件的变化，不要受数组第一个值下标为0的影响！ 
		*(target_name + (MAX_LENGTH - count)) = *(target_name_copy_length - count);  
	}
}









