#include <stdio.h>
int main(void)
{
	int lower_limit, upper_limit;
	int row;
	int ans_square, ans_cube,linshi_integer;
	printf("Please input the lower limit number in integer:\n");
	scanf_s("%d", &lower_limit);
	printf("Please input the upper limit number in integer:\n");
	scanf_s("%d", &upper_limit);
	printf("\n");
	printf("%16s%16s%16s\n", "Integer", "Square", "Cube");
	for (row = 1,linshi_integer = lower_limit; row <= (upper_limit - lower_limit + 1); row++,linshi_integer++) {
		ans_square = linshi_integer * linshi_integer;
		ans_cube = linshi_integer * linshi_integer * linshi_integer;
		printf("%16d%16d%16d\n", linshi_integer, ans_square, ans_cube);
	}
	return 0;
}