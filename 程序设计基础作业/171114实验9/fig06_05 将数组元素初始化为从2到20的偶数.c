#include <stdio.h>
#include <math.h>
int main(void)
{
	int array [10],i,j = 0;
	printf("%7s%14s","Element","Value\n");
		for (i = 2;i <= 20;i += 2) {
			array [j] = i;
			printf("%7d%13d\n",j,array [j]);
			j += 1;
		}
	return 0;
}
