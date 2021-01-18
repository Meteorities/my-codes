#include <stdio.h>
#include <ctype.h>
int main(void)
{
	unsigned long int upper_letter = 0;
	unsigned long int lower_letter = 0;
	unsigned long int other_letter = 0;
	int ch; //Cautious!!
	printf("%s\n", "Please input the text:");
	while ((ch = getchar()) != EOF) {
		if (isupper(ch)) {
			upper_letter++;
		}
		else if (islower(ch)) {
			lower_letter++;
		}
		else {
			other_letter++;
		}
	}
		printf("%lu uppercase characters read.\n", upper_letter);
		printf("%lu lowercase characters read.\n", lower_letter);
		printf("%lu other characters read.\n", other_letter);
		return 0;
}