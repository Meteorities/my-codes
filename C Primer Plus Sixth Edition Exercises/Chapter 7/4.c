#include <stdio.h>
int main(void)
{
	int substi_num = 0;
	char ch;
	printf("Please input the text(end with \"#\"):\n");
	while ((ch = getchar()) != '#') {
		if (ch == '.') {
			putchar('!');
			substi_num++;
		}
		else if (ch == '!') {
			putchar('!');
			putchar('!');
			substi_num++;
		}
		else {
			putchar(ch);
		}
	}
	putchar('\n');
	printf("Text after substituions is shown above.\nSubstituion total:%d\n",substi_num);
	return 0;
}