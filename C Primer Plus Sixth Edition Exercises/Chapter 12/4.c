#include <stdio.h>

static int total_count = 0;
void calc_mine_execution_time(void);

int main(void)
{
	int count,wish;
	printf("Please enter a number that you like: ");
	scanf_s("%d", &wish);
	for (count = 1; count <= wish; count++) {
		calc_mine_execution_time();
	}
	printf("Function \"calc_mine_execution_time\" had called %d time(s).\n", total_count);
	return 0;
}

void calc_mine_execution_time(void)
{
	total_count++;
}