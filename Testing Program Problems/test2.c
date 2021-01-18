#include <stdio.h>
#include <string.h>
int main(void)
{
	char test [6];
	gets (test);
	strlwr (test);
	puts (test);
	strupr (test);
	puts (test);
	return 0;
}
