#include <stdio.h>
int main(void)
{
	char letter_shown;
	int row, column;
	letter_shown = 'A'; //���1�������ʼ����ӡ�ַ��������κ�һ��ѭ����
	for (row = 1; row <= 6; row++) {
		for (column = 1; column <= row; column++) {
			printf("%c", letter_shown);
			letter_shown++;//���2���ַ�+1ֻ�����ڲ�ѭ����
		}
		printf("\n");
	}
	return 0;
}