#include <stdio.h> //�������������Լ������Ķ�
int main(void)
{
	char ch;
	int count = 0;
	printf("%s\n", "Please input the text you want to analyse(input \"#\" to end):");
	while ((ch = getchar()) != '#') {
		if (ch == 'e' && ((ch = getchar()) == 'i')) { //�ǵ���()��������ִ�е���䣡
			count++;
		}
		if (ch == '#') { //��ֹ���ֶ���;���뾮��/�ڶ���getchar���뾮��
			printf("String \"ei\" had shown 0 time(s).\n");
			return 0;
		}
	}
	printf("String \"ei\" had shown %d time(s).\n", count);
	return 0;
}