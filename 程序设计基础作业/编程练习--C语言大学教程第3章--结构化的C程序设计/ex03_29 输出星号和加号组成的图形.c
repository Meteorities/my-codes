#include <stdio.h>
int main(void)
{
	int i = 1;
	for ( ;i <= 10;i++) {
		if (i % 2 != 0) {
			printf("****\n");
		}
		else if (i % 2 == 0) {
			printf("++++++++\n");
		}
	}
	return 0;
}
