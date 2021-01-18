#include <stdio.h>

int main(void)
{
	int size = 6;
	int temp = 0;
	int count = 0;
	temp = size - 1;
	for (count = 0;count < 8;count++) {
		
		switch(count) {
			case temp: {
				printf("Yes");
				break;
			}
			default: {
				printf("No");
				break;
			}
		}
		
	}
	
	return 0;
}
	
