#include <stdio.h>
int main(void)
{
	int i,line [5],line1,line2,line3,line4,line5;
	for (i = 0;i < 5;i++) {
		scanf("%d",& line [i]);
	}
	for (line1 = 0;line1 < line [0];line1++) {
		printf("*");
	}
	printf("\n");
	for (line2 = 0;line2 < line [1];line2++) {
		printf("*");
	}
	printf("\n");
	for (line3 = 0;line3 < line [2];line3++) {
		printf("*");
	}
	printf("\n");
	for (line4 = 0;line4 < line [3];line4++) {
		printf("*");
	}
	printf("\n");
	for (line5 = 0;line5 < line [4];line5++) {
		printf("*");
	}
	printf("\n");
	return 0;
}
