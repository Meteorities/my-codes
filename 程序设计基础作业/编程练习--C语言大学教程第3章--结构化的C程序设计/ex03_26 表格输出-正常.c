#include <stdio.h>
int main(void)
{
	int a;
	printf("A     A+2     A+4     A+6\n");
	for (a = 3;a <= 15;a = a + 3) {
		printf("       %-8d%-8d%-8d%-8d\n",a,a + 2,a + 4,a + 6);
	}
	return 0;
}
