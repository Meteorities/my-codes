#include <stdio.h>
int main(void)
{
	char letter_shown;
	int row, column;
	letter_shown = 'A'; //理解1：此题初始化打印字符不能在任何一个循环中
	for (row = 1; row <= 6; row++) {
		for (column = 1; column <= row; column++) {
			printf("%c", letter_shown);
			letter_shown++;//理解2：字符+1只能在内层循环中
		}
		printf("\n");
	}
	return 0;
}