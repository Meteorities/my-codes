#include <stdio.h>
int main(void)
{
	char letter_shown;
	int row,column;
	for (row = 1; row <= 6; row++) {
		for (column = 1, letter_shown = 'F'; column <= row; column++, letter_shown--) { 
			//����ص㣺���ڲ�forѭ���еĳ�ʼ�������ظ�ʹ�ã�����Ϊ��forѭ������һ��������ѭ������Ƕ��ѭ���е�һ����
			printf("%c", letter_shown);
		}
		printf("\n");
	}
	return 0;
}