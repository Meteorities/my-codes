#include <stdio.h>
int main(void)
{
	int a1,a2,a3;
	for (a3 = 1;a3 <= 4;a3++) {
		for (a1 = 1;a1 <= 4;a1++) {
			printf("*");
			printf(" ");
			printf("*");
			printf(" ");
	}
		printf("\n");
		printf(" ");
		printf("*");
		printf(" ");
		for (a2 = 1;a2 <= 6;a2++) {
			printf("*");
			printf(" ");
	}
		printf("*");
		printf("\n");
	}
	return 0;
}
