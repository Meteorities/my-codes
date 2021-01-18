#include <stdio.h>
#include <math.h>
int main(void)
{
	int count = 1;
	for ( ;count <= 1000000000;count++) {
		if (count % 100000000 == 0) {
			printf("%d",count);
			printf("\n");
		}
	}
	return 0;
} 
