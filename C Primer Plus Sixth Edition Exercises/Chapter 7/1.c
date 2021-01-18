#include <stdio.h>
int main(void)
{
	int space_num = 0;
	int newline_num = 0;
	int character_num = 0;
	char ch;
	printf("Please input the text(end with "#"):\n");
	while ((ch = getchar()) != '#') {
		switch (ch) {
		case ' ':
			space_num++;
			break;
		case '\n':
			newline_num++;
			break;
		}
		character_num++;
	}
	printf("Space character number:%d\nNewline character number:%d\nCharacters without space(s) and newline(s) number:%d\n", space_num, newline_num, (character_num - space_num - newline_num));
	return 0;
}