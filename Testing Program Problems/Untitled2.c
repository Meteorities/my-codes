#include <stdio.h>  //program to solve question @ page 171 in the middle
int main(void)
{
	int guests;
	int test[11];
	int n = 0;
	while (guests++ < 10) {
		test[n] = guests;
		n = n + 1;
		printf("%d \n",guests);
	}
	for (n = 0;n < 11;n = n + 1) {
		printf("%d ",test[n]);
		if (n == 10) {
			printf("\n");
		}
	}
	if (guests == 11) {
		test[10] = guests;
	}
	else {
		printf("%s\n","Wrong!");
	}
	for (n = 0;n < 11;n = n + 1) {
		printf("%d ",test[n]);
	}
	return 0;
}
