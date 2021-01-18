#include <Stdio.h>
int main(void)
{
	char letter_input;
	char letter_shown;
	int row, count_a, count_b, count_c;
	printf("Please input the extended aim:\n");
	scanf_s("%c", &letter_input);//用户输入终止字母
	const count = letter_input - (int)'A' + 1;//定义静态变量count
	for (row = 1; row <= count; row++) {
		for (count_a = 1; count_a <= (count - row); count_a++) {
			printf(" "); //打印升序部分空格
		}
		for (count_b = 1, letter_shown = 'A'; count_b <= row; count_b++, letter_shown++) {
			printf("%c", letter_shown);//打印升序字母
		}
		for (count_c = 1, letter_shown = letter_input - count + row - 1; count_c <= (row - 1); count_c++, letter_shown--) {
			printf("%c", letter_shown);//打印除输入字母外的降序字母
			//该循环打印的首字母 = (count - row) + 1，观察得知
		}
		for (count_a = 1; count_a <= (count - row); count_a++) {
			printf(" "); //打印降序部分空格
		}
		printf("\n");
	}
	return 0;
}