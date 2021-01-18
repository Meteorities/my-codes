#include <stdio.h>
#include <string.h>
int main(void)
{
	char string [80];
	int start = 0,number = 0,i;
	gets (string);
	for (i = 0;string [i] != '\0';i++) {
		if (string [i] == ' ') {
			start = 0;
		}
		else if (start == 0) {
			start = 1;
			number++;
		}
	}
	printf("%d",number);
	return 0;
}
