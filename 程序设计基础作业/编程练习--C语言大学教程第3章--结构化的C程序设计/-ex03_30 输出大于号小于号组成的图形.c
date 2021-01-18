#include <stdio.h>
int main(void)
{
	int i = 1;
	while (i <= 10) {
		if (i % 2 != 0) {
			printf(">>>>>>>>>>\n");
			i++;
		}
		else if (i % 2 == 0) {
			printf("<<<<<<<<<<\n");
			i++;
		} 
	}
	return 0;
} 
