/* ������� @ 2019-09-22 17:53:14 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int enter_num = 0;
	int count;
	char ** ch;
	char * pointer;  //ָ��Ϊÿ�����ʶ�̬����ġ��պ��㹻���뵥�ʵĿռ�
	char string[50];  //����ÿ�����ʵ���ʱ�ַ�������

	printf("How many words do you wish to enter?\n");
	while (scanf_s("%d", &enter_num) != 1 || enter_num <= 0) {
		while (getchar() != '\n') {
			continue;
		}
		printf("Please try again to input the right number.\n");
	}
	ch = (char **)malloc(enter_num * sizeof(char*));

	printf("\nEnter %d word(s) now:\n", enter_num);
	for (count = 0; count < enter_num; count++) {
		scanf_s("%s", string, enter_num);
		pointer = (char *)malloc(sizeof(string));  //����ÿ��������ʵ�ַ������ȶ�̬����Ŀռ�
		strcpy_s(pointer, sizeof(string), string);
		ch[count] = pointer;  //ch + count = pointer; ����ʧ��
	}

	printf("\nHere are your words:\n");
	for (count = 0; count < enter_num; count++) {
		puts(ch[count]);  //puts(ch + count); ����ʧ��
		free(ch[count]);  //�ͷŴ���������ʵ���ʱ�ռ�  //free(ch + count); ����ʧ��
	}
	free(ch);
	return 0;
}