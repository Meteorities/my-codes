#include <stdio.h>
int main(void)
{
	char letter_shown;
	int row,column;
	for (row = 1; row <= 6; row++) {
		for (column = 1, letter_shown = 'F'; column <= row; column++, letter_shown--) { 
			//理解重点：该内层for循环中的初始条件会重复使用！（因为此for循环不是一个独立的循环，是嵌套循环中的一环）
			printf("%c", letter_shown);
		}
		printf("\n");
	}
	return 0;
}