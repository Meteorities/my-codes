#include <stdio.h>

int main(void)
{
	char * test = "\u2605";
	printf("%c  %s",'\123',test);
	return 0;
}
