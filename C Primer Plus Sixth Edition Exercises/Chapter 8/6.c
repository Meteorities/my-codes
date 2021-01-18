#include <stdio.h>
#include <ctype.h>
//for isblank() function
char get_first(void);

int main(void)
{
	char output_character;
	printf("%s\n", "Please input something to test...");
	output_character = get_first();

	//In case of inputing enter at the first time
	if (output_character != '\n') {
		printf("The first non-whitespace character in this text is %c,ASCII code is %d\n", output_character, output_character);
		printf("%s\n", "Done.");
	}

	return 0;
}

char get_first(void) //return the first non-whitespace character
{
	int ch;
	int judge = 0; //flag for whitespace character(s)

	ch = getchar();
	judge = isblank(ch);  //return zero when meet non-whitespace character

	if (ch == '\n') {  //In case of inputing enter at the first time
		printf("%s\n", "You hadn't input anything but a enter.");
		printf("%s\n", "Done.");
	}

	while (judge != 0 && ch != '\n') {
		ch = getchar();
		judge = isblank(ch);
	}

	return ch;
}