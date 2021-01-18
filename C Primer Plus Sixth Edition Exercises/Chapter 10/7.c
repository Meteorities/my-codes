#include <stdio.h>
#define ROW 4
#define COL 5

void copy_arr(double target_name[][COL],double source_name[][COL],int copy_length);

int main(void)
{
	int i,j;
	double numbers[ROW][COL],copy[ROW][COL];
	printf("请依行输入4x5二维数组中的各个数字：\n");
	for (i = 0;i < ROW;i++) {
		for (j = 0;j < COL;j++) {
			scanf("%lf",&numbers[i][j]);
		}
	}
	copy_arr(copy,numbers,ROW);
	printf("\nSource array:\n");
	for (i = 0;i < ROW;i++) {
		for (j = 0;j < COL;j++) {
			printf("%.2f ",numbers[i][j]);
		}
		printf("\n");
	}
	printf("\nCopy array:\n");
	for (i = 0;i < ROW;i++) {
		for (j = 0;j < COL;j++) {
			printf("%.2f ",copy[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void copy_arr(double target_name[][COL],double source_name[][COL],int copy_length)
{
	int count1,count2;
	for (count1 = 0;count1 < ROW;count1++) {
		for (count2 = 0;count2 < COL;count2++) {
			target_name[count1][count2] = source_name[count1][count2];
		}
	}
}


