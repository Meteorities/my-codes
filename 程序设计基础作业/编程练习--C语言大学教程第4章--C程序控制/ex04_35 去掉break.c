#include <stdio.h>
int main(void)
{
	int counter;
	for (counter = 1;counter < 5;counter++) {
		printf("%d\n",counter);
	}
	if (counter == 5) {
		printf("Broke out of loop at counter == %d\n",counter);
	}
	return 0;
}
