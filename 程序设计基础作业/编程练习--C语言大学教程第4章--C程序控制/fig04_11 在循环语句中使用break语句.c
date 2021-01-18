#include <stdio.h>
int main(void)
{
	int counter;
	for (counter = 1;counter <= 10;++counter) {
		printf("%d\n",counter);
		if (counter == 4) {
			printf("Broke out of loop at counter == 5\n");
			break;
		}
	}
	return 0;
}
