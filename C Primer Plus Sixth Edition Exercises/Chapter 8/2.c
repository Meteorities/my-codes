#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;//�ۼ�10�л���
	printf("%s\n", "Please input the text:");
	ch = getchar();
	printf("%16s%16s\n", "Character input", "ASCII Code");
	while (ch != EOF) {
		count++;
		if (ch < ' ' || ch == 127) {
			if (ch == '\n') {
				printf("%16s%16d\n", "\\n", ch);
				putchar('\n');
			}
			else if (ch == '\a') {
				printf("%16s%16d\n", "\\a", ch);
			}
			else if (ch == '\t') {
				printf("%16s%16d\n", "\\t", ch);
			}
			else if (ch == '\v') {
				printf("%16s%16d\n", "\\v", ch);
			}
			else if (ch == '\f') {
				printf("%16s%16d\n", "\\f", ch);
			}
			else {
				printf("%15s%c%16d\n","^",ch+64,ch);//ע��˴�����Ҷ���!
			}
		}
		else {
			printf("%16c%16d\n", ch, ch);
		}
		if (count % 10 == 0) {
			putchar('\n');
		}
		ch = getchar();
	}
	return 0;
}