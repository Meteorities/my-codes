#include <stdio.h>
#include <stdlib.h>

int square(int n);

int main(void)
{
   int i;

	for (i = 1; i <= 10; ++i) {
		printf("%d  ", square(i));
	}

	return 0;
}

