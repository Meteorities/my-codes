#include <stdio.h>
int main(void)
{
	int a = 6;
	int b = 4;
	int exchange = 0;
	printf("%d\n", (a > b) ? a : b);
	exchange = a;
	a = b;
	b = exchange;
	printf("%d %d\n", a, b);
	printf("%d\n", (exchange > a) ? a : b);
	printf("%d\n", (a > b) ? a : b);
	return 0;
}