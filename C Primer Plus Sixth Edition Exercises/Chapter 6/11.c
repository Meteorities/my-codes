#include <stdio.h>
int main(void)
{
	int input[8],count;
	printf("Please input eight integers and press the enter key:\n");
	for (count = 0; count < 8; count++) {
		scanf_s("%d",& input[count]);
	}
	printf("Here are the reverse order results:\n");
	for (count = 7; count >= 0; count--) {
		printf("%d ", input[count]);
	}
	return 0;
}