#include <stdio.h>
#include <math.h>
int main(void)
{
	int n = 0,judge = 0;
	for ( ;n < 100;n++) { //why n couldn't be equal to 100?
		printf("*");
		judge++;
		if (judge % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}
