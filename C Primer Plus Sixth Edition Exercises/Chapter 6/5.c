#include <Stdio.h>
int main(void)
{
	char letter_input;
	char letter_shown;
	int row, count_a, count_b, count_c;
	printf("Please input the extended aim:\n");
	scanf_s("%c", &letter_input);//�û�������ֹ��ĸ
	const count = letter_input - (int)'A' + 1;//���徲̬����count
	for (row = 1; row <= count; row++) {
		for (count_a = 1; count_a <= (count - row); count_a++) {
			printf(" "); //��ӡ���򲿷ֿո�
		}
		for (count_b = 1, letter_shown = 'A'; count_b <= row; count_b++, letter_shown++) {
			printf("%c", letter_shown);//��ӡ������ĸ
		}
		for (count_c = 1, letter_shown = letter_input - count + row - 1; count_c <= (row - 1); count_c++, letter_shown--) {
			printf("%c", letter_shown);//��ӡ��������ĸ��Ľ�����ĸ
			//��ѭ����ӡ������ĸ = (count - row) + 1���۲��֪
		}
		for (count_a = 1; count_a <= (count - row); count_a++) {
			printf(" "); //��ӡ���򲿷ֿո�
		}
		printf("\n");
	}
	return 0;
}