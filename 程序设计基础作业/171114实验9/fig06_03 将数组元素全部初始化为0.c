#include <stdio.h>
#include <math.h>
int main(void)
{
	int array [10] = {0,0,0,0,0,0,0,0,0,0},i;
	printf("%7s%14s","Element","Value\n");
	for (i = 0;i < 10;i++) {
		printf("%7d%13d\n",i,array [i]);
	}
	return 0;
}
