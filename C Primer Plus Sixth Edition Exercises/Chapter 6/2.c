#include <stdio.h>
int main(void)
{
	char dollar_sign;
	int row, column;
	dollar_sign = '$';
	for (row = 1; row <= 5; row++) {
		for (column = 1; column <= row; column++) {
			printf("%c", dollar_sign);
		}
		printf("\n");
	}
	return 0;
}