#include <stdio.h> //cd
int main(void)
{
	int i = 0,j,k;
	scanf("%d",& k);
	for (j = k;j >= 0;j--) {
		if (j == k || j == 0) {
			for (i = k;j >= 0;j--) {
				printf("*");
			}
			printf("\n");
		}
		else {
			for (i = k;i >= 0;i--) {
				if (i == k || i == 0) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
} 
