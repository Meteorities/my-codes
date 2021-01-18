#include <stdio.h>

void add_two_arrays(int array1[],int array2[],int target_array[],int MAX_LENGTH);

int main(void)
{
	int MAX_LENGTH = 0;
	printf("Please input the max length of arrays: ");
	scanf("%d",&MAX_LENGTH);
	int count,num_array1[MAX_LENGTH],num_array2[MAX_LENGTH],result_array[MAX_LENGTH]; //VLA定义要在变长那个变量初始化之后！否则会有隐藏的错误！ 
	printf("Please input numbers for first array:\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		scanf("%d",&num_array1[count]);
	}
	printf("Please input numbers for second array:\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		scanf("%d",&num_array2[count]);
	}
	add_two_arrays(num_array1,num_array2,result_array,MAX_LENGTH);
	printf("\n************THE FIRST ARRAY************\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		printf("%6d",num_array1[count]);
	}
	printf("\n***********THE SECOND ARRAY************\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		printf("%6d",num_array2[count]);
	}
	printf("\n***********THE RESULT ARRAY************\n");
	for (count = 0;count < MAX_LENGTH;count++) {
		printf("%6d",result_array[count]);
	}
	printf("\n\nDone.\n");
	return 0;
}

void add_two_arrays(int array1[],int array2[],int target_array[],int MAX_LENGTH)
{
	int count;
	for (count = 0;count < MAX_LENGTH;count++) {
		target_array[count] = array1[count] + array2[count];
	}
}
