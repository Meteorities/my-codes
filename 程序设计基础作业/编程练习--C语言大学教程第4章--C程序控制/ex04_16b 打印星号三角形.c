#include <stdio.h>
int main(void)
{
	int MAIN,line; //��Ҫ��"main"!�ؼ��� 
	for (line = 1;line <= 10;line++) {
		for (MAIN = 10;MAIN >= line;MAIN--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
