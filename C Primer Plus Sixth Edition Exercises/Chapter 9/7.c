#include <stdio.h>
#include <ctype.h>

int where_is_letter(char letter);

int main(void)
{
	char ch;
	printf("Please input the content,ending with EOF:\n");
	while((ch = getchar()) != EOF)
	{
		if(isalpha(ch)) {
			where_is_letter(ch);
		}
		else if (ch != '\n'){
			printf("%c isn't a letter.\n",ch);
		}
		else {
			putchar(ch); //discard bad inputs "and make a new line"
		}
	}
	return 0;
}

int where_is_letter(char letter) {
	int ascii_code;
	ascii_code = (int)letter;
	if (ascii_code > 64 && ascii_code < 91) {
		printf("%c is a capital/upper case letter and it's letter %d in alphabet.\n",letter,(ascii_code - 64));
		return 0;
	}
	if (ascii_code > 96 && ascii_code < 123) {
		printf("%c is a lower case letter and it's letter %d in alphabet.\n",letter,(ascii_code - 96));
		return 0;
	}
	else {
		return -1;
	}
}
