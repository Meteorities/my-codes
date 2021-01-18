#include <stdio.h>
int main(void)
{
	int MAIN,line; //不要用"main"!关键字 
	for (line = 1;line <= 10;line++) {
		for (MAIN = 10;MAIN >= line;MAIN--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
